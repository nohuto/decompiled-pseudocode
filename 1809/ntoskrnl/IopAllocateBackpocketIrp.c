/*
 * XREFs of IopAllocateBackpocketIrp @ 0x14027E320
 * Callers:
 *     IoPageReadEx @ 0x1400DE720 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA00 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140134FF4 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B92C0 (IopAllocateIrpExReturn.c)
 *     IoInitializeIrp @ 0x14011A180 (IoInitializeIrp.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x14027EEE4 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  PIRP v8; // rbx
  bool v9; // cl
  bool v10; // zf
  bool v11; // cl
  __int64 v12; // rdx
  bool v13; // dl
  LARGE_INTEGER v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 > byte_140435DC0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140435D98 != CurrentThread )
    {
      v14.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140435D90, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140435DA0, Executive, 0, 0, &v14) == 258 )
        {
          LOBYTE(v12) = a2;
          result = IopAllocateIrpExReturn(a1, v12, 0LL, retaddr);
          if ( result )
            return result;
        }
      }
      v8 = qword_140435D88;
      IoInitializeIrp(qword_140435D88, 72 * a2 + 280, a2 + 1);
      v8->AllocationFlags = 33;
      qword_140435D98 = (__int64)KeGetCurrentThread();
      goto LABEL_9;
    }
    v8 = qword_140435DB8;
    if ( qword_140435DB8 )
    {
      qword_140435DB8 = *(PIRP *)&qword_140435DB8->Type;
      IoInitializeIrp(v8, 72 * a2 + 280, a2 + 1);
      --v8->Tail.Overlay.CurrentStackLocation;
      --v8->CurrentLocation;
      --v8->StackCount;
      v13 = (IopIrpExtensionStatus & 1) != 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      v10 = !v13 || (IopFunctionPointerMask & 4) == 0;
LABEL_21:
      v8->AllocationFlags = 33;
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140435D68 == CurrentThread )
  {
    v8 = qword_140435DB8;
    if ( !qword_140435DB8 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    qword_140435DB8 = *(PIRP *)&qword_140435DB8->Type;
    IoInitializeIrp(v8, 72 * a2 + 280, a2 + 1);
    --v8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    v11 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    v10 = !v11 || (IopFunctionPointerMask & 4) == 0;
    goto LABEL_21;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140435D60, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140435D70, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v6) = a2;
      result = IopAllocateIrpExReturn(a1, v6, 0LL, retaddr);
      if ( result )
        return result;
    }
  }
  v8 = Irp;
  IoInitializeIrp(Irp, 72 * a2 + 280, a2 + 1);
  v8->AllocationFlags = 33;
  qword_140435D68 = (__int64)KeGetCurrentThread();
LABEL_9:
  --v8->CurrentLocation;
  --v8->StackCount;
  --v8->Tail.Overlay.CurrentStackLocation;
  v9 = (IopIrpExtensionStatus & 1) != 0;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
  v10 = !v9 || (IopFunctionPointerMask & 4) == 0;
LABEL_22:
  if ( !v10 )
    IopInitActivityIdIrp(v8);
  return (__int64)v8;
}
