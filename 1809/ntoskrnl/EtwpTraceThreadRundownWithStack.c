/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x140314058
 * Callers:
 *     EtwpThreadEnumCallback @ 0x140727C90 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KeRemoveQueueApc @ 0x14012F428 (KeRemoveQueueApc.c)
 *     EtwpTraceThreadRundown @ 0x14017C50C (EtwpTraceThreadRundown.c)
 */

int __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  __int16 Object; // [rsp+40h] [rbp-39h] BYREF
  char v14; // [rsp+42h] [rbp-37h]
  int v15; // [rsp+44h] [rbp-35h]
  _QWORD v16[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v17[96]; // [rsp+60h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+67h] BYREF

  if ( a1 == KeGetCurrentThread() )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 107) )
    goto LABEL_11;
  v15 = 0;
  v16[1] = v16;
  v16[0] = v16;
  Object = 1;
  v14 = 6;
  KeInitializeApc((__int64)v17, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !KeInsertQueueApc((__int64)v17, (__int64)&Object, a2, 0) )
    goto LABEL_11;
  Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
  v4 = MEMORY[0xFFFFF78000000320];
  if ( KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout) == 258 )
  {
    if ( !KeRemoveQueueApc((__int64)v17, v5, v6) )
    {
      LODWORD(v9) = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
      v10 = MEMORY[0xFFFFF78000000320];
      ++*(_DWORD *)(a2 + 84);
      v11 = (unsigned int)(v10 - v4);
      *(_QWORD *)(a2 + 88) += v11;
      *(_QWORD *)(a2 + 96) += v11 * v11;
      return v9;
    }
    ++*(_DWORD *)(a2 + 68);
LABEL_11:
    LODWORD(v9) = EtwpTraceThreadRundown((__int64)a1, a2);
    return v9;
  }
  v7 = MEMORY[0xFFFFF78000000320] - v4;
  v8 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v4) / *(_DWORD *)(a2 + 64);
  if ( (unsigned int)v8 >= 4 )
    v8 = 3LL;
  ++*(_DWORD *)(a2 + 4 * v8 + 72);
  *(_QWORD *)(a2 + 88) += v7;
  v9 = v7 * (unsigned __int64)v7;
  *(_QWORD *)(a2 + 96) += v9;
  return v9;
}
