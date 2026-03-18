/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C008ED24
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0052A70 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  struct tagGRAPHICS_DEVICE *v8; // r8
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  DWORD dmFields; // eax
  int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // ecx
  bool v19; // cf
  __int64 v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // r8
  unsigned int v24; // eax
  DWORD dmPelsWidth; // ebp
  DWORD dmPelsHeight; // esi
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  DWORD v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edi
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // esi
  unsigned int v36; // eax
  DWORD v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // r8d
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  DWORD dmBitsPerPel; // edx
  unsigned int v45; // ecx
  unsigned int v46; // r9d
  _DWORD *v47; // rcx
  unsigned int v48; // edx
  _DWORD *v49; // r9
  DWORD dmDisplayFrequency; // edx
  unsigned int v51; // ecx
  unsigned int v52; // edi
  int v53; // [rsp+0h] [rbp-78h]
  int v54; // [rsp+4h] [rbp-74h]
  unsigned int v55; // [rsp+8h] [rbp-70h]
  unsigned int v56; // [rsp+Ch] [rbp-6Ch]
  int v57; // [rsp+10h] [rbp-68h]
  __int64 v58; // [rsp+18h] [rbp-60h]
  _DWORD *v59; // [rsp+20h] [rbp-58h]
  unsigned int v61; // [rsp+88h] [rbp+10h]

  v4 = -1;
  v6 = 0LL;
  v53 = -1;
  v7 = 0LL;
  v59 = 0LL;
  v8 = a1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  if ( !a2->dmBitsPerPel )
    a2->dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v15 = dmFields & 0x80;
  v54 = v15;
  if ( (dmFields & 0x80) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
    a2->dmDisplayFixedOutput = 0;
  v16 = 0;
  v55 = 0;
  do
  {
    if ( v6 && !v12 )
    {
      v17 = v6[43];
      v18 = v6[44];
      if ( v17 < v18 )
      {
        if ( v17 >= 0x1E0 )
        {
          v19 = v18 < 0x280;
          goto LABEL_15;
        }
      }
      else if ( v17 >= 0x280 )
      {
        v19 = v18 < 0x1E0;
LABEL_15:
        if ( !v19 && v6[46] >= 0x3Cu )
          return (struct _devicemodeW *)v6;
      }
    }
    v56 = 0;
    v61 = *((_DWORD *)v8 + 47);
    if ( !v61 )
      goto LABEL_51;
    v21 = 0LL;
    v22 = *((_DWORD *)v8 + 47);
    v58 = 0LL;
    while ( 1 )
    {
      if ( a3 && *(_DWORD *)(v21 + *((_QWORD *)v8 + 24)) )
        goto LABEL_94;
      v23 = *(_QWORD *)(v21 + *((_QWORD *)v8 + 24) + 8);
      if ( !a4 || ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v23 + 180)) & 2) == 0 )
      {
        if ( !v15 )
          goto LABEL_27;
        v24 = dwOrientationDiffTable[4 * *(unsigned int *)(v23 + 84) + a2->dmDisplayOrientation];
        if ( v12 >= v24 )
          break;
      }
LABEL_93:
      v8 = a1;
      v22 = v61;
LABEL_94:
      v21 += 16LL;
      v16 = v55;
      ++v56;
      v58 = v21;
      if ( v56 >= v22 )
        goto LABEL_50;
    }
    if ( v12 > v24 )
      v7 = (_DWORD *)v23;
LABEL_27:
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v7 != (_DWORD *)v23 )
    {
      v40 = *(_DWORD *)(v23 + 172);
      v41 = dmPelsWidth - v40;
      if ( dmPelsWidth < v40 )
        v41 = *(_DWORD *)(v23 + 172) - dmPelsWidth;
      if ( v9 < v41 )
        goto LABEL_92;
      if ( v9 > v41 )
        v7 = (_DWORD *)v23;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v7 == (_DWORD *)v23 )
        goto LABEL_31;
      v42 = *(_DWORD *)(v23 + 176);
      v43 = dmPelsHeight - v42;
      if ( dmPelsHeight < v42 )
        v43 = *(_DWORD *)(v23 + 176) - dmPelsHeight;
      if ( v10 < v43 )
        goto LABEL_91;
      if ( v10 > v43 )
        v7 = (_DWORD *)v23;
    }
    if ( v7 != (_DWORD *)v23 )
    {
      dmBitsPerPel = a2->dmBitsPerPel;
      v45 = *(_DWORD *)(v23 + 168);
      v46 = dmBitsPerPel - v45;
      if ( dmBitsPerPel < v45 )
        v46 = *(_DWORD *)(v23 + 168) - dmBitsPerPel;
      if ( v4 < v46 )
        goto LABEL_53;
      v47 = (_DWORD *)v23;
      if ( v4 <= v46 )
        v47 = v7;
      v7 = v47;
      if ( v47 == (_DWORD *)v23 )
        goto LABEL_87;
      v48 = a2->dmDisplayFixedOutput != *(_DWORD *)(v23 + 88);
      if ( v13 < v48 )
        goto LABEL_53;
      v49 = (_DWORD *)v23;
      if ( v13 <= v48 )
        v49 = v47;
      v7 = v49;
      if ( v49 == (_DWORD *)v23 )
      {
LABEL_87:
        v21 = v58;
      }
      else
      {
        dmDisplayFrequency = a2->dmDisplayFrequency;
        v51 = *(_DWORD *)(v23 + 184);
        v52 = dmDisplayFrequency - v51;
        if ( dmDisplayFrequency < v51 )
          v52 = *(_DWORD *)(v23 + 184) - dmDisplayFrequency;
        if ( v11 < v52 )
          goto LABEL_53;
        v7 = (_DWORD *)v23;
        if ( v11 <= v52 )
          v7 = v49;
        v21 = v58;
        if ( v7 != (_DWORD *)v23 )
          goto LABEL_91;
        v16 = v55;
      }
    }
LABEL_31:
    if ( !v7
      || !v16
      && (v7[43] > dmPelsWidth && dmPelsWidth || v7[44] > dmPelsHeight && dmPelsHeight
                                              || v7[46] > a2->dmDisplayFrequency) )
    {
      goto LABEL_91;
    }
    v59 = v7;
    v27 = *(_DWORD *)(v23 + 172);
    v28 = dmPelsWidth - v27;
    v29 = a2->dmBitsPerPel;
    v53 = dwOrientationDiffTable[4 * *(unsigned int *)(v23 + 84) + a2->dmDisplayOrientation];
    v30 = v27 - dmPelsWidth;
    v19 = dmPelsWidth < v27;
    v31 = *(_DWORD *)(v23 + 176);
    if ( v19 )
      v28 = v30;
    v32 = dmPelsHeight - v31;
    v9 = v28;
    v33 = v31 - dmPelsHeight;
    v19 = dmPelsHeight < v31;
    v34 = *(_DWORD *)(v23 + 168);
    if ( v19 )
      v32 = v33;
    v35 = v29 - v34;
    v10 = v32;
    v36 = v34 - v29;
    v19 = v29 < v34;
    v37 = a2->dmDisplayFrequency;
    if ( v19 )
      v35 = v36;
    v57 = *(_DWORD *)(v23 + 88);
    v38 = *(_DWORD *)(v23 + 184);
    v4 = v35;
    v39 = v37 - v38;
    v13 = a2->dmDisplayFixedOutput != v57;
    if ( v37 < v38 )
      v39 = v38 - v37;
    v11 = v39;
    if ( v53 || v35 || v28 || v32 || a2->dmDisplayFixedOutput != v57 || v39 )
    {
LABEL_53:
      v21 = v58;
LABEL_91:
      v15 = v54;
LABEL_92:
      v12 = v53;
      goto LABEL_93;
    }
LABEL_50:
    v6 = v59;
    v16 = v55;
    v15 = v54;
    v12 = v53;
    v8 = a1;
LABEL_51:
    v55 = ++v16;
  }
  while ( v16 < 2 );
  return (struct _devicemodeW *)v6;
}
