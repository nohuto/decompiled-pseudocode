/*
 * XREFs of ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00C0FC4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall LoadCPUserPreferences(struct _UNICODE_STRING *a1)
{
  unsigned int ProfileValue; // eax
  char *v3; // rbx
  __int64 v4; // rdi
  int Src; // [rsp+70h] [rbp+18h] BYREF

  ProfileValue = FastGetProfileValue(
                   a1,
                   *((unsigned int *)&gpviCPUserPreferences + 1),
                   *((_QWORD *)&gpviCPUserPreferences + 1),
                   0LL,
                   &Src,
                   8);
  if ( ProfileValue )
  {
    if ( ProfileValue > 8 )
      ProfileValue = 8;
    memmove(gpdwCPUserPreferencesMask, &Src, ProfileValue);
  }
  v3 = (char *)&gpviCPUserPreferences + 16;
  v4 = 20LL;
  do
  {
    if ( (unsigned int)FastGetProfileValue(a1, *((unsigned int *)v3 + 1), *((_QWORD *)v3 + 1), 0LL, &Src, 4) )
      *(_DWORD *)v3 = Src;
    v3 += 16;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 7004LL)) & 4;
  *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 8;
  *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 7004LL)) & 0x20;
  if ( (gdwPUDFlags & 0x20000) != 0 )
    *gpsi |= 0x80u;
  else
    *gpsi &= ~0x80u;
  *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8198LL);
  *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(8206LL);
  *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(8208LL);
  *(_DWORD *)(gpsi + 7004LL) = (unsigned int)gpdwCPUserPreferencesMask ^ (*(_DWORD *)(gpsi + 7004LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x7FFFFFFF;
  EnforceColorDependentSettings();
  return 1LL;
}
