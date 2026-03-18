/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00A6F94
 * Callers:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00A89C0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 * Callees:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C004CC08 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00782A0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00A4EE0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00A71C0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C010626C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C011E46C (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C028E63C (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028E6B0 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C028E868 (-vEmergency@MAPPER@@QEAAXXZ.c)
 */

struct PFE *__fastcall ppfeGetAMatch(
        struct XDCOBJ *a1,
        struct tagENUMLOGFONTEXDVW *a2,
        const unsigned __int16 *Src,
        __int64 a4,
        char a5,
        unsigned int *a6,
        struct _POINTL *a7,
        unsigned int *a8,
        int a9)
{
  unsigned int v10; // eax
  struct _FONTHASH **v11; // rbx
  struct PFE *result; // rax
  unsigned int v13; // eax
  struct PFF *v14; // rax
  int v15; // r8d
  struct PFF *v16; // rbx
  _QWORD *v17; // rsi
  unsigned int v18; // [rsp+38h] [rbp-C8h]
  struct PFT *v19; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+68h] [rbp-98h]
  _BYTE v22[180]; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+134h] [rbp+34h]
  struct PFE *v24; // [rsp+148h] [rbp+48h]
  int v25; // [rsp+150h] [rbp+50h]
  _DWORD *v26; // [rsp+158h] [rbp+58h]
  _DWORD *v27; // [rsp+160h] [rbp+60h]
  _DWORD *v28; // [rsp+168h] [rbp+68h]
  unsigned int v29; // [rsp+17Ch] [rbp+7Ch]

  MAPPER::MAPPER((MAPPER *)v22, a1, a6, a7, a8, a2, Src, v18, a9, a5);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 252LL) & 4) != 0 )
  {
    v19 = *(struct PFT **)(*(_QWORD *)a1 + 256LL);
    if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v22, (struct _UNIVERSAL_FONT_ID *)&v19) )
      return v24;
  }
  if ( gpPFTPrivate )
  {
    if ( *((_DWORD *)gpPFTPrivate + 7) )
    {
      v29 &= ~0x80u;
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, gpPFTPrivate, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, gpPFTPrivate + 1, 0) )
      {
        return v24;
      }
    }
  }
  v19 = gpPFTDevice;
  v10 = v29;
  if ( (v29 & 0x200) != 0 )
  {
    v29 |= 0x80u;
    v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v19, *(_QWORD *)(*(_QWORD *)a1 + 48LL), 0LL);
    v16 = v14;
    if ( v14 )
    {
      v17 = (_QWORD *)((char *)v14 + 112);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, (struct _FONTHASH **)v14 + 14, v15)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, (struct _FONTHASH **)v16 + 13, 0) )
      {
        return v24;
      }
      v10 = v29;
      if ( (v29 & 0x20000000) != 0 )
      {
        result = v24;
        if ( !v24 || *(struct PFF **)v24 != v16 )
        {
          *a6 = 0;
          *a8 = 0;
          a7->y = 1;
          a7->x = 1;
          v20[1] = *v17;
          v20[0] = v17;
          v21 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v20);
        }
        return result;
      }
    }
    else
    {
      v10 = v29;
    }
  }
  v11 = gpPFTPublic;
  v29 = v10 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, gpPFTPublic, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, v11 + 1, 1) )
  {
    return v24;
  }
  result = v24;
  if ( !v24 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v22, a6, a8, a7);
    if ( !result )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x20000000) == 0 )
      {
        v13 = v29;
        if ( (v29 & 0x200) == 0 )
        {
LABEL_13:
          if ( (v13 & 0x20000) != 0 )
          {
LABEL_33:
            v29 = v13 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v22);
            return v24;
          }
          MAPPER::bGetFaceName((MAPPER *)v22);
          *v28 = 0;
          v25 = -1;
          v24 = 0LL;
          *v26 = 0;
          *v27 = 1;
          v27[1] = 1;
          v29 &= ~0x80u;
          v23 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, v11, 0)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v22, v11 + 1, 0) )
          {
            return v24;
          }
          result = v24;
          if ( !v24 )
          {
            v13 = v29;
            goto LABEL_33;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v22);
        result = v24;
        if ( v24 )
          return result;
      }
      v13 = v29;
      goto LABEL_13;
    }
  }
  return result;
}
