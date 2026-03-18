/*
 * XREFs of MiUpdateUserMappings @ 0x14059D018
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiRevertQuasiPte @ 0x14013D6E8 (MiRevertQuasiPte.c)
 *     MiMakeQuasiPte @ 0x14013D6FC (MiMakeQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  unsigned __int64 v0; // r11
  __int64 v1; // rax
  _QWORD *v2; // r11
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
        if ( !HIBYTE(word_140465BEC) )
        {
          v7 = (v5 & 1) == 0;
LABEL_11:
          if ( !v7 )
            v5 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v7 = (v5 & 1) == 0;
        goto LABEL_11;
      }
    }
    *v2 = v5;
    if ( v6 )
      MiWritePteShadow((__int64)v2);
LABEL_4:
    v0 = (unsigned __int64)(v2 + 1);
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  while ( v0 <= 0xFFFFF6FB7DBED7F8uLL );
  return result;
}
