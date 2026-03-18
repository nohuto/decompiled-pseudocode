/*
 * XREFs of MiInitializeKernelStacks @ 0x1409EDBB0
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1400ACF94 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140187074 (MiBuildDynamicRegion.c)
 *     MiMarkBootGuardPage @ 0x14074D994 (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MiInitializePteInfo @ 0x1409EEF28 (MiInitializePteInfo.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = (((v1 - (unsigned int)KeKernelStackSize) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v3, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMarkBootGuardPage(v3 - 8);
  MiMarkBootGuardPage(v2 - 8);
  v4 = qword_1404675C0;
  byte_1404666FC = (unsigned int)KeKernelStackSize >> 12;
  v5 = MiSystemVaToDynamicBitmap(14);
  if ( !(unsigned int)MiBuildDynamicRegion(v5, v4, 0x10000000000uLL)
    || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140466698, 14, 0, 11, v4, 0x10000000000LL, 1) )
  {
    return 0LL;
  }
  result = 1LL;
  dword_1404666B0 |= 1u;
  qword_1404666E8 = qword_140466630;
  return result;
}
