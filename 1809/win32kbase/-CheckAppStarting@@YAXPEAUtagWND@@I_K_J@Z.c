/*
 * XREFs of ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00879A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall CheckAppStarting(struct tagWND *a1)
{
  __int64 *v1; // rdi
  PEPROCESS *v2; // rax
  __int64 v3; // rbx
  LONGLONG TimeQuadPart; // rax
  __int64 v5; // rcx

  v1 = &gppiStarting;
  v2 = (PEPROCESS *)gppiStarting;
  v3 = MEMORY[0xFFFFF78000000014] - 300000000LL;
  while ( v2 )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(*v2);
    v5 = *v1;
    if ( v3 <= TimeQuadPart )
    {
      v1 = (__int64 *)(v5 + 376);
      v2 = *(PEPROCESS **)(v5 + 376);
    }
    else
    {
      *(_DWORD *)(v5 + 12) &= 0xFFFFFEBF;
      v2 = *(PEPROCESS **)(*v1 + 376);
      *v1 = (__int64)v2;
    }
  }
  memset(ghCanActivateForegroundPIDs, 0, sizeof(ghCanActivateForegroundPIDs));
}
