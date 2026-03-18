/*
 * XREFs of AllocateUnicodeString @ 0x1C0124434
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0021AE8 (InternalRegisterClassEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     xxxSetClassData @ 0x1C00FC374 (xxxSetClassData.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C023DCF0 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall AllocateUnicodeString(struct _UNICODE_STRING *a1, unsigned __int16 *a2)
{
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // si
  WCHAR *v6; // rax
  unsigned int v7; // eax

  if ( !a2 )
  {
    RtlInitUnicodeString(a1, 0LL);
    return 1LL;
  }
  v4 = *a2;
  if ( (unsigned __int16)(v4 + 2) < v4 )
    v5 = -1;
  else
    v5 = *a2 + 2;
  if ( (unsigned __int16)(*a2 + 2) >= v4 )
  {
    v6 = (WCHAR *)Win32AllocPoolWithQuota(v5, 2020897621LL);
    a1->Buffer = v6;
    if ( v6 )
    {
      memmove(v6, *((const void **)a2 + 1), *a2);
      a1->MaximumLength = v5;
      v7 = *a2;
      a1->Length = v7;
      a1->Buffer[(unsigned __int64)v7 >> 1] = 0;
      return 1LL;
    }
  }
  return 0LL;
}
