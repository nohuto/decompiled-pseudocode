/*
 * XREFs of HamRpcSrvDebugOpenPackageHandle @ 0x180079EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800747F0 (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 */

__int64 __fastcall HamRpcSrvDebugOpenPackageHandle(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  return HamSrvOpenPackageHandle((struct _HAM_CLIENT_CONTEXT *)a1, a2, *(_DWORD *)(a1 + 144), a3, a4, a5);
}
