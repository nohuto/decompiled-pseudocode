/*
 * XREFs of MiFillPteWithProto @ 0x1402BC0AC
 * Callers:
 *     MiResolveSharedZeroFault @ 0x1400429B0 (MiResolveSharedZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiUpdatePageTableUseCount @ 0x14010FC78 (MiUpdatePageTableUseCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MiFillPteWithProto(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int v9; // r8d
  bool v10; // zf

  MiUpdatePageTableUseCount((__int64)(a1 << 25) >> 16);
  if ( a3 == 256 )
    v6 = (a2 << 16) | 0x400;
  else
    v6 = 32 * (a3 & 0x1F | 0xFFFFFFFFF8000020uLL);
  MiSwizzleInvalidPte(v6);
  LODWORD(CurrentThread) = MiPteInShadowRange(a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v9 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_12;
      v10 = (v8 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_12;
      v10 = (v8 & 1) == 0;
    }
    if ( !v10 )
    {
      LOBYTE(CurrentThread) = 0;
      v8 |= 0x8000000000000000uLL;
    }
  }
LABEL_12:
  *(_QWORD *)a1 = v8;
  if ( v9 )
    LOBYTE(CurrentThread) = MiWritePteShadow(a1, v8);
  return (char)CurrentThread;
}
