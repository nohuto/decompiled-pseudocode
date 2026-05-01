/*
 * XREFs of SHFusionInitializeFromModuleID @ 0x1800E4624
 * Callers:
 *     SHActivateContext @ 0x1800E45B8 (SHActivateContext.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     DelayLoadCC @ 0x1800E47CC (DelayLoadCC.c)
 */

__int64 SHFusionInitializeFromModuleID()
{
  unsigned __int16 v0; // si
  HMODULE ModuleHandleW; // rdi
  unsigned int v2; // ebx
  HANDLE v3; // rax
  HANDLE v4; // rcx
  ACTCTXW pActCtx; // [rsp+20h] [rbp-268h] BYREF
  WCHAR Filename[264]; // [rsp+60h] [rbp-228h] BYREF

  v0 = dword_1805107A0;
  ModuleHandleW = hModule;
  if ( g_hActCtx != (HANDLE)-1LL )
    return 1;
  memset_0(&pActCtx, 0, sizeof(pActCtx));
  v2 = 0;
  if ( !ModuleHandleW )
    ModuleHandleW = GetModuleHandleW(0LL);
  GetModuleFileNameW(ModuleHandleW, Filename, 0x104u);
  pActCtx.lpResourceName = (LPCWSTR)v0;
  pActCtx.cbSize = 56;
  pActCtx.lpSource = Filename;
  pActCtx.dwFlags = 136;
  pActCtx.hModule = ModuleHandleW;
  v3 = CreateActCtxW(&pActCtx);
  v4 = v3;
  if ( v3 != (HANDLE)-1LL )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&g_hActCtx, (signed __int64)v3, -1LL) != -1 )
      ReleaseActCtx(v3);
    DelayLoadCC(v4);
  }
  if ( g_hActCtx != (HANDLE)-1LL )
    return 1;
  return v2;
}
