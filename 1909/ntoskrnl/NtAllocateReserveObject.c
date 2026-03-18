/*
 * XREFs of NtAllocateReserveObject @ 0x1406E0200
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtAllocateReserveObject(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v7; // rdx
  __int64 result; // rax
  _DWORD *v9; // rbx
  int inserted; // edx
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  if ( (unsigned int)v3 > 1 )
    return 3221225485LL;
  result = ObCreateObjectEx(
             PreviousMode,
             *(&PspMemoryReserveObjectTypes + v3),
             a2,
             PreviousMode,
             v11,
             PspMemoryReserveObjectSizes[v3],
             0,
             0,
             &Object,
             0LL);
  if ( (int)result >= 0 )
  {
    v9 = Object;
    memset(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v9[6] = 4;
      *((_QWORD *)v9 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v9 + 9) = v9;
      *((_BYTE *)v9 + 80) = 0;
    }
    inserted = ObInsertObjectEx(v9, 0LL, 0xF0003u, 0, 0, 0LL, &v12);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *a1 = v12;
    return (unsigned int)inserted;
  }
  return result;
}
