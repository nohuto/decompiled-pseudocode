/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0029F6C
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002A07C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  int v2; // r8d

  v1 = *((_QWORD *)this + 2);
  if ( *(int *)(v1 + 2184) < 0x2000 )
    v2 = 1;
  else
    v2 = *(_DWORD *)(v1 + 256);
  if ( *(int *)(v1 + 2184) >= 0x2000 || *(_BYTE *)(v1 + 2484) )
    return *(_DWORD *)(v1 + 2392) * ((v2 << 6) + ((8 * v2 + 191) & 0xFFFFFFF8)) + 8 * (v2 + 71);
  else
    return 1296LL;
}
