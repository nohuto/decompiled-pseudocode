/*
 * XREFs of ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C013B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetKernelDisplayPolicy(int a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v2 )
  {
    *((_BYTE *)DXGGLOBAL::GetGlobal(v2) + 20313) = a2 == 0;
    return 0LL;
  }
  v3 = (unsigned int)(v2 - 1);
  if ( !(_DWORD)v3 )
  {
    *((_BYTE *)DXGGLOBAL::GetGlobal(v3) + 20312) = a2 == 0;
    return 0LL;
  }
  if ( (_DWORD)v3 == 1 )
  {
    *((_BYTE *)DXGGLOBAL::GetGlobal(v3) + 20316) = a2 != 0;
    return 0LL;
  }
  return 3221225485LL;
}
