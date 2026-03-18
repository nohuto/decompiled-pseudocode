/*
 * XREFs of AllocAce @ 0x1C0016020
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C00166E0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C026846C (InitSecurity.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

char *__fastcall AllocAce(void *Src, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  ULONG v9; // r15d
  ULONG v10; // esi
  size_t v11; // rdi
  char *v12; // rbx
  char *v13; // rdx

  v9 = RtlLengthSid(Sid);
  v10 = v9 + 8;
  if ( Src )
  {
    v11 = (unsigned int)*a6;
    if ( (unsigned int)v11 + v10 >= (unsigned int)v11 )
    {
      v12 = (int)IsWin32AllocPoolWithQuotaImplSupported() < 0
          ? 0LL
          : (char *)Win32AllocPoolWithQuotaImpl(41LL, (unsigned int)v11 + v10, 1702064981LL);
      if ( v12 )
      {
        memmove(v12, Src, v11);
        if ( (int)IsWin32FreePoolImplSupported() >= 0 )
          Win32FreePoolImpl(Src);
        goto LABEL_8;
      }
    }
  }
  else
  {
    LODWORD(v11) = 0;
    v12 = (char *)Win32AllocPoolWithQuota(v10, 0x65737355u);
    if ( v12 )
    {
LABEL_8:
      *a6 = v11 + v10;
      v13 = &v12[(unsigned int)v11];
      *v13 = a2;
      *((_WORD *)v13 + 1) = v10;
      v13[1] = a3;
      *((_DWORD *)v13 + 1) = a4;
      RtlCopySid(v9, v13 + 8, Sid);
      return v12;
    }
  }
  return 0LL;
}
