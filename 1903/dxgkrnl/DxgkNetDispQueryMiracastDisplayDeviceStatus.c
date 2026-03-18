/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02036D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002838 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003ABE0 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C02A61AC (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(unsigned __int16 *a1, __int64 a2)
{
  _DWORD *v2; // r15
  char *v4; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  SIZE_T v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  size_t v25; // rbx
  unsigned __int64 v27[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v28; // [rsp+70h] [rbp+18h] BYREF
  int v29; // [rsp+78h] [rbp+20h] BYREF

  v2 = (_DWORD *)a2;
  v4 = 0LL;
  v29 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( (int)DxgkNetDispAccessCheck(Current, v6) >= 0 )
  {
    v27[0] = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v11 = RtlStringCchLengthW(a1, 0x208uLL, v27);
    v15 = v11;
    if ( v11 >= 0 )
    {
      v17 = v27[0];
      v18 = 2 * (v27[0] + 1);
      if ( !is_mul_ok(v27[0] + 1, 2uLL) )
        v18 = -1LL;
      v19 = (char *)operator new[](v18, 0x4B677844u, PagedPool);
      v4 = v19;
      if ( v19 )
      {
        v25 = 2 * v17;
        memmove(v19, a1, v25);
        *(_WORD *)&v4[v25] = 0;
        if ( (int)DxgkMiracastQueryMiracastStatus(v4, &v29, &v28) >= 0 )
        {
          if ( (unsigned __int64)v2 >= MmUserProbeAddress )
            v2 = (_DWORD *)MmUserProbeAddress;
          *v2 = v29;
        }
      }
      else
      {
        v28 = -2147483638;
        v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v24);
      }
    }
    else
    {
      v28 = -2147483640;
      v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdWarning(v16);
    }
  }
  else
  {
    v28 = -2147483643;
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v10);
  }
  if ( v4 )
    operator delete[](v4);
  return v28;
}
