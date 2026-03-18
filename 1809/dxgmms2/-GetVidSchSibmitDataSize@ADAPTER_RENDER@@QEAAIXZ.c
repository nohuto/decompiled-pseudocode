/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C00293D4
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00294F0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(ADAPTER_RENDER *this)
{
  __int64 v1; // rax
  char v2; // cl
  int v3; // r8d
  int v4; // edx

  v1 = *((_QWORD *)this + 2);
  v2 = 1;
  v3 = *(_DWORD *)(v1 + 2160);
  if ( v3 < 0x2000 )
    v4 = 1;
  else
    v4 = *(_DWORD *)(v1 + 256);
  if ( v3 < 0x2000 && !*(_BYTE *)(v1 + 2452) )
    v2 = 0;
  if ( v2 )
    return *(_DWORD *)(v1 + 2368) * ((v4 << 6) + ((8 * v4 + 191) & 0xFFFFFFF8)) + 8 * (v4 + 72);
  else
    return 1296LL;
}
