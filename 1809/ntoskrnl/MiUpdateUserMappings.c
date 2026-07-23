/*
 * XREFs of MiUpdateUserMappings @ 0x14056F028
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiRevertQuasiPte @ 0x14013BC24 (MiRevertQuasiPte.c)
 *     MiMakeQuasiPte @ 0x14013BC38 (MiMakeQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  unsigned __int64 v0; // r11
  __int64 v1; // rax
  __int64 *v2; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r11
  __int64 v5; // rdx
  int v6; // r8d
  bool v7; // zf

  v0 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    v1 = MI_READ_PTE_LOCK_FREE(v0);
    if ( (v1 & 1) != 0 )
    {
      MiMakeQuasiPte(v1);
    }
    else
    {
      if ( (v1 & 0x400) == 0 )
        goto LABEL_4;
      MiRevertQuasiPte(v1);
    }
    if ( MiPteInShadowRange(v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v6 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v7 = (v5 & 1) == 0;
LABEL_11:
          if ( !v7 )
            v5 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v7 = (v5 & 1) == 0;
        goto LABEL_11;
      }
    }
    *v2 = v5;
    if ( v6 )
      MiWritePteShadow((__int64)v2, v5);
LABEL_4:
    v0 = (unsigned __int64)(v2 + 1);
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  while ( v0 <= 0xFFFFF6FB7DBED7F8uLL );
  return result;
}
