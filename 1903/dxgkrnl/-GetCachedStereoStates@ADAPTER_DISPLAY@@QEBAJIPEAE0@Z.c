/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00C7850
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C72EC (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(DXGADAPTER **this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGADAPTER *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v16; // rax
  _QWORD *v17; // rax

  v5 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a3 || !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v16 + 24) = 6163LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a3 && a4 && (unsigned int)v5 < *((_DWORD *)this + 20) )
  {
    v11 = this[14];
    v12 = -1073741275;
    v13 = 3968 * v5;
    v14 = *((_DWORD *)v11 + 992 * v5 + 276);
    if ( v14 != -1 && *(_DWORD *)((char *)v11 + v13 + 1108) != -1 )
    {
      *a3 = v14 == 1;
      v12 = 0;
      *a4 = *(_DWORD *)((char *)this[14] + v13 + 1108) == 1;
    }
    return v12;
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v17[4] = a4;
    v17[3] = a3;
    v17[5] = v5;
    v17[6] = *((unsigned int *)this + 20);
    v17[7] = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
}
