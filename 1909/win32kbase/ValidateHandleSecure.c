/*
 * XREFs of ValidateHandleSecure @ 0x1C002BCE0
 * Callers:
 *     HMValidateHandle @ 0x1C002D628 (HMValidateHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BBC4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     IsHandleEntrySecure @ 0x1C0086760 (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHandleSecure(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // di
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8

  v4 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v5 = (char *)qword_1C0210758 + (unsigned int)(unsigned __int16)a1 * dword_1C0210760;
  GetDomainLockRef(14LL, a2, a3);
  if ( WORD1(a1) != *((_WORD *)v5 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    return 0LL;
  }
  if ( !v5[24] || (v4 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v5) || (v4 & 2) == 0 )
    return 0LL;
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v5, v6, v7);
  return 1LL;
}
