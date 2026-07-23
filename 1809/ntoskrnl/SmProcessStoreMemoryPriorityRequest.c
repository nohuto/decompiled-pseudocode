/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x1406CCF80
 * Callers:
 *     SmSetStoreInformation @ 0x1406CCED0 (SmSetStoreInformation.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140011FDC (SmpKeyedStoreEntryGet.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     SmRereferenceProcessObject @ 0x140139760 (SmRereferenceProcessObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  __int128 *v3; // r9
  int v4; // edi
  NTSTATUS v5; // ebx
  __int64 v7; // rax
  PVOID Object; // [rsp+20h] [rbp-68h] BYREF
  int v9; // [rsp+28h] [rbp-60h]
  __int128 v10; // [rsp+30h] [rbp-58h]
  PVOID v11; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v12[48]; // [rsp+48h] [rbp-40h] BYREF

  v3 = (__int128 *)a1;
  Object = 0LL;
  v4 = 0;
  v9 = 0;
  v10 = 0uLL;
  if ( (_DWORD)a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
    }
    v10 = *v3;
    if ( (_BYTE)v10 == 1 )
    {
      if ( (v10 & 0xFFFFFC00) != 0 )
      {
        v5 = -1073741811;
      }
      else if ( (v10 & 0x100) != 0 )
      {
        v5 = SmRereferenceProcessObject(*((void **)&v10 + 1), a2, a3, &Object);
        if ( v5 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)Object + 435, 0x40000u);
          if ( (v10 & 0x200) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process != Object )
            {
              v4 = 1;
              KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v12);
            }
            v11 = Object;
            v7 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14055C188, (unsigned __int64 *)&v11, 0, 0);
            if ( v7 )
              *(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v7 + 16) & 0x3FF) + 6023LL) = 1;
            else
              v5 = -1073741632;
          }
          else
          {
            v5 = 0;
          }
        }
      }
      else
      {
        v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741735;
    }
  }
  else
  {
    v5 = -1073741306;
  }
  if ( v4 )
    KiUnstackDetachProcess((__int64)v12, 0LL);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
