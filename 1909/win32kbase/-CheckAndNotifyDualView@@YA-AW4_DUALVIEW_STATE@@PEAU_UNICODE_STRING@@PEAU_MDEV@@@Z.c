/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0042C08
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     DrvGetDeviceFromName @ 0x1C003A300 (DrvGetDeviceFromName.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0043DC0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00A4DBC (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 */

__int64 __fastcall CheckAndNotifyDualView(const UNICODE_STRING *a1, __int64 a2)
{
  wchar_t *v3; // r8
  int v4; // ecx
  int v6; // r12d
  int v7; // r13d
  int v8; // ebx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rsi
  wchar_t *i; // rdi
  unsigned int v13; // ebp
  unsigned __int16 v14; // ax
  unsigned int v15; // r8d
  int v16; // edx
  unsigned int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  BOOL v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  int v27; // eax
  unsigned int v28; // eax
  wchar_t **v29; // rcx
  unsigned int *v30; // r14
  __int64 v31; // r15
  unsigned int v32; // [rsp+20h] [rbp-48h] BYREF
  void *v33; // [rsp+28h] [rbp-40h]
  unsigned int v34; // [rsp+80h] [rbp+18h] BYREF
  int v35; // [rsp+88h] [rbp+20h]

  v34 = 0;
  v3 = gpGraphicsDeviceList;
  v4 = 0;
  v35 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 1;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    v9 = (*((_DWORD *)v3 + 40) & 0x20800000) == 0;
    v10 = v4 + 1;
    v3 = (wchar_t *)*((_QWORD *)v3 + 16);
    if ( v9 )
      v10 = v4;
    v4 = v10;
  }
  while ( v3 );
  if ( !v10 )
    return 0LL;
  v33 = PALLOCMEM2((unsigned int)(16 * v10), 0x73726447u, 1);
  v11 = (__int64)v33;
  if ( !v33 )
    return 3LL;
  i = gpGraphicsDeviceList;
  v13 = 0;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v14 = -1;
      if ( !gForceDisconnect )
        v14 = gProtocolType;
      if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v14, &v32, &v34) )
      {
        v23 = 3;
        goto LABEL_40;
      }
      v15 = v34;
      v16 = 0;
      if ( v34 )
        v8 = 0;
      if ( a2 )
      {
        v17 = *(_DWORD *)(a2 + 20);
        if ( v17 )
        {
          v18 = (__int64 *)(a2 + 40);
          v19 = v17;
          do
          {
            v20 = *v18;
            v18 += 7;
            if ( *(wchar_t **)(v20 + 2576) == i )
              v16 = 1;
            --v19;
          }
          while ( v19 );
          v15 = v34;
        }
        v21 = v15 && !v16;
        v35 |= v21;
      }
      if ( (*((_DWORD *)i + 40) & 0x2800008) == 0x800000 )
      {
        v22 = 2LL * v13;
        *(_QWORD *)(v11 + 8 * v22) = i;
        *(_DWORD *)(v11 + 8 * v22 + 12) = v34 != 0;
        ++v13;
        *(_DWORD *)(v11 + 8 * v22 + 8) = v16 != 0;
      }
      i = (wchar_t *)*((_QWORD *)i + 16);
    }
    while ( i );
    if ( v8 )
      goto LABEL_50;
  }
  else
  {
LABEL_50:
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      v27 = *((_DWORD *)i + 40);
      if ( (v27 & 0x2000008) == 0 )
      {
        if ( (v27 & 0x800000) == 0 )
          break;
        v23 = 1;
        *(_DWORD *)(v11 + 12) = 1;
        goto LABEL_28;
      }
    }
  }
  v23 = 1;
LABEL_28:
  if ( a1 )
  {
    i = DrvGetDeviceFromName(a1);
    if ( !i )
      goto LABEL_35;
    v28 = 0;
    if ( !v13 )
      goto LABEL_35;
    v29 = (wchar_t **)v11;
    while ( i != *v29 )
    {
      ++v28;
      v29 += 2;
      if ( v28 >= v13 )
        goto LABEL_35;
    }
    if ( *(_DWORD *)(v11 + 16LL * v28 + 8) == *(_DWORD *)(v11 + 16LL * v28 + 12) && a2 )
      goto LABEL_35;
    v6 = 1;
    v7 = 1;
  }
  else
  {
    if ( !v13 )
    {
LABEL_35:
      v23 = 0;
      goto LABEL_36;
    }
    v24 = (_DWORD *)(v11 + 8);
    v25 = v13;
    do
    {
      if ( *v24 != v24[1] || !a2 )
        v6 = 1;
      v24 += 4;
      --v25;
    }
    while ( v25 );
  }
  if ( !v6 )
    goto LABEL_35;
  if ( v7 )
  {
    v23 = 3;
    if ( a2 )
    {
      v30 = (unsigned int *)(v11 + 8);
      v31 = v13;
      do
      {
        DrvUpdateAttachFlag((struct tagGRAPHICS_DEVICE *)i, *v30);
        v30 += 4;
        --v31;
      }
      while ( v31 );
      v11 = (__int64)v33;
    }
  }
LABEL_36:
  if ( v13 )
  {
    if ( v6 || v35 )
      v23 = 1;
    else
      v23 = 2;
  }
LABEL_40:
  Win32FreePool(v11);
  return v23;
}
