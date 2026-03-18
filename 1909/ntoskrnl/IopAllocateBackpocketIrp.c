/*
 * XREFs of IopAllocateBackpocketIrp @ 0x140292C10
 * Callers:
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x1401171C0 (IoInitializeIrp.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x140293718 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  PIRP v6; // rbx
  bool v7; // cl
  bool v8; // zf
  bool v9; // cl
  bool v10; // dl
  LARGE_INTEGER v11; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 > byte_140461640 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140461618 != CurrentThread )
    {
      v11.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140461610, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140461620, Executive, 0, 0, &v11) == 258 )
        {
          result = IopAllocateIrpExReturn();
          if ( result )
            return result;
        }
      }
      v6 = qword_140461608;
      IoInitializeIrp(qword_140461608, 72 * a2 + 280, a2 + 1);
      v6->AllocationFlags = 33;
      qword_140461618 = (__int64)KeGetCurrentThread();
      goto LABEL_9;
    }
    v6 = qword_140461638;
    if ( qword_140461638 )
    {
      qword_140461638 = *(PIRP *)&qword_140461638->Type;
      IoInitializeIrp(v6, 72 * a2 + 280, a2 + 1);
      --v6->Tail.Overlay.CurrentStackLocation;
      --v6->CurrentLocation;
      --v6->StackCount;
      v10 = (IopIrpExtensionStatus & 1) != 0;
      *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
      v8 = !v10 || (IopFunctionPointerMask & 4) == 0;
LABEL_21:
      v6->AllocationFlags = 33;
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_1404615E8 == CurrentThread )
  {
    v6 = qword_140461638;
    if ( !qword_140461638 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    qword_140461638 = *(PIRP *)&qword_140461638->Type;
    IoInitializeIrp(v6, 72 * a2 + 280, a2 + 1);
    --v6->Tail.Overlay.CurrentStackLocation;
    --v6->CurrentLocation;
    --v6->StackCount;
    v9 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
    v8 = !v9 || (IopFunctionPointerMask & 4) == 0;
    goto LABEL_21;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_1404615E0, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_1404615F0, Executive, 0, 0, &Timeout) == 258 )
    {
      result = IopAllocateIrpExReturn();
      if ( result )
        return result;
    }
  }
  v6 = Irp;
  IoInitializeIrp(Irp, 72 * a2 + 280, a2 + 1);
  v6->AllocationFlags = 33;
  qword_1404615E8 = (__int64)KeGetCurrentThread();
LABEL_9:
  --v6->CurrentLocation;
  --v6->StackCount;
  --v6->Tail.Overlay.CurrentStackLocation;
  v7 = (IopIrpExtensionStatus & 1) != 0;
  *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
  v8 = !v7 || (IopFunctionPointerMask & 4) == 0;
LABEL_22:
  if ( !v8 )
    IopInitActivityIdIrp(v6);
  return (__int64)v6;
}
