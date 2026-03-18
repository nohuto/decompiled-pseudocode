/*
 * XREFs of ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C0296390
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02962FC (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1C0296B78 (-Reserve@DXGBLACKBOX@@QEAAPEAEI@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackBoxData(DISPLAYSTATECHECKER *this, unsigned int *a2)
{
  struct DXGGLOBAL *Global; // rax
  DXGBLACKBOX *v5; // rdi
  __int64 v6; // rax
  DISPLAYSTATECHECKER *v7; // rax
  DISPLAYSTATECHECKER *v8; // rbp
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 *v14; // rax
  unsigned __int16 *InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+48h] [rbp-10h]
  int v19; // [rsp+4Ch] [rbp-Ch]

  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v5 = (struct DXGGLOBAL *)((char *)Global + 304048);
  v6 = *((_QWORD *)Global + 38012);
  if ( v6 )
    *(_DWORD *)(v6 + 4) = 8;
  v7 = (DISPLAYSTATECHECKER *)*((_QWORD *)this + 224);
  v8 = this;
  *a2 = 0;
  if ( v7 )
    v8 = v7;
  v9 = DXGBLACKBOX::Reserve(v5, 32 * *((_DWORD *)this + 452) + 20);
  v10 = v9;
  if ( v9 )
  {
    v11 = 0;
    *(_OWORD *)v9 = *(_OWORD *)((char *)this + 1812);
    for ( *((_DWORD *)v9 + 4) = *((_DWORD *)this + 457);
          v11 < *((_DWORD *)this + 452);
          *(_OWORD *)&v10[v12 + 36] = *(_OWORD *)((char *)v8 + v13 + 32) )
    {
      v12 = v11++;
      v13 = 224 * v12;
      v12 *= 32LL;
      *(_OWORD *)&v10[v12 + 20] = *(_OWORD *)((char *)v8 + v13 + 16);
    }
    v14 = (unsigned __int16 *)*((_QWORD *)v5 + 6);
    if ( *((_DWORD *)v14 + 1) != 8 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v19 = 0;
      v18 = 12;
      InputBuffer = v14;
      v16 = *((unsigned int *)v14 + 1);
      ZwPowerInformation(TraceApplicationPowerMessage|0x40, &InputBuffer, 0x20u, 0LL, 0);
      v14 = (unsigned __int16 *)*((_QWORD *)v5 + 6);
    }
    *a2 = *v14;
  }
}
