/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00A4EE0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00A6F94 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C010626C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C01285B8 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        char a10)
{
  const struct tagENUMLOGFONTEXDVW *v10; // rax
  unsigned int v14; // ebp
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // rsi
  unsigned __int16 i; // ax
  size_t v18; // rbx
  __int64 v19; // r8
  unsigned __int16 v20; // dx
  unsigned __int16 *v21; // rax
  unsigned __int16 v22; // cx
  int j; // edx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // cl
  DC **v30; // r10
  __int64 v31; // r9
  __int64 v32; // rax
  char v33; // bp
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // eax
  __int16 *v37; // rax
  __int16 v38; // cx
  int v39; // ebx
  int v40; // esi
  int v41; // kr00_4
  struct _KTHREAD *CurrentThread; // r14
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 CurrentProcessWin32Process; // rax
  int v50; // r14d
  __int64 v51; // rcx
  int v52; // eax
  struct _KTHREAD *v53; // rsi
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rax
  const struct tagENUMLOGFONTEXDVW *v59; // rax
  unsigned int v60; // eax
  int v61; // edx
  bool v62; // cf
  int v63; // r8d
  const struct tagENUMLOGFONTEXDVW *v64; // rax
  int v65; // ecx
  int v66; // edx
  int v67; // r8d
  bool v68; // sf
  int v69; // ecx
  MAPPER *result; // rax

  v10 = a6;
  v14 = 0;
  *(_QWORD *)this = a2;
  v15 = Src;
  *((_DWORD *)this + 63) = 0;
  v16 = v15;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 1) = v10;
  *((_QWORD *)this + 2) = v15;
  *((_DWORD *)this + 22) = 0;
  for ( i = *v15; i; ++v16 )
  {
    if ( i == 95 && (unsigned __int16)(v16[1] - 48) <= 9u )
      break;
    i = v16[1];
  }
  v18 = 2LL * (unsigned int)(v16 - v15);
  memmove((char *)this + 24, v15, v18);
  *(_WORD *)((char *)this + v18 + 24) = 0;
  if ( *v16 == 95 )
  {
    v20 = v16[1];
    v21 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v20 - 48) <= 9u )
    {
      while ( v20 )
      {
        do
        {
          if ( v20 >= 0x30u )
          {
            v22 = v20;
            if ( v20 <= 0x39u )
              break;
          }
          v22 = v21[1];
          ++v21;
          v20 = v22;
        }
        while ( v22 );
        v20 = v22;
        if ( v22 )
        {
          v19 = v21[1];
          ++v21;
          for ( j = v22 - 48; (_WORD)v19; j = v24 + 2 * (5 * j - 24) )
          {
            if ( (unsigned __int16)(v19 - 48) > 9u )
              break;
            ++v21;
            v24 = (unsigned __int16)v19;
            v19 = *v21;
          }
          v25 = v14++;
          *((_DWORD *)this + v25 + 25) = j;
          v20 = *v21;
        }
      }
    }
  }
  *((_DWORD *)this + 24) = v14;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 36) = 0LL;
  if ( v14 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v26 = *((_QWORD *)this + 1);
    v27 = *(unsigned int *)(v26 + 352);
    if ( (_DWORD)v27 )
      memmove((char *)this + 92, (const void *)(v26 + 348), 4 * v27 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  *((_DWORD *)this + 70) = a9;
  v28 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v29 = *(_BYTE *)(v28 + 23);
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v29;
  *a5 = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 28) = a4;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v30 = *(DC ***)this;
  v31 = *((_DWORD *)this + 63) | ~(*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 40LL) << 11) & 0x40000u;
  *((_DWORD *)this + 63) = v31;
  v32 = *((_QWORD *)*v30 + 122);
  if ( *(_DWORD *)(v32 + 208) == 1 && ((*(_DWORD *)(v32 + 340) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v30)) )
  {
    v33 = a10;
    LODWORD(v31) = v31 | 0x1000;
    *((_DWORD *)this + 63) = v31;
  }
  else
  {
    v33 = -65;
  }
  v34 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v34 + 26) == 2 )
  {
    v35 = *((_DWORD *)*v30 + 130);
    if ( (v35 & 1) == 0 || (v35 & 2) != 0 )
    {
      LODWORD(v31) = v31 | 0x8000;
      *((_DWORD *)this + 63) = v31;
    }
  }
  v36 = *(_DWORD *)(v34 + 16);
  if ( v36 == 400 || v36 == 700 )
  {
    LODWORD(v31) = v31 | 0x10000000;
    *((_DWORD *)this + 63) = v31;
  }
  v37 = (__int16 *)*((_QWORD *)this + 2);
  v38 = *v37;
  if ( *v37 == 77
    && v37[1] == 83
    && v37[2] == 32
    && v37[3] == 83
    && v37[4] == 72
    && v37[5] == 69
    && v37[6] == 76
    && v37[7] == 76
    && v37[8] == 32
    && v37[9] == 68
    && v37[10] == 76
    && v37[11] == 71
    && !v37[12] )
  {
    *((_DWORD *)this + 63) |= 0x8000000u;
  }
  else
  {
    if ( v38 != 83 || v37[1] != 89 || v37[2] != 83 || v37[3] != 84 || v37[4] != 69 || v37[5] != 77 || v37[6] )
    {
      if ( v38 == 84
        && v37[1] == 77
        && v37[2] == 83
        && v37[3] == 32
        && v37[4] == 82
        && v37[5] == 77
        && v37[6] == 78
        && !v37[7] )
      {
        LODWORD(v31) = v31 | 0x800000;
      }
      else if ( v38 == 83 && v37[1] == 89 && v37[2] == 77 && v37[3] == 66 && v37[4] == 79 && v37[5] == 76 )
      {
        LODWORD(v31) = v31 | 0x4000000;
      }
      else
      {
        if ( v38 != 64 )
          goto LABEL_76;
        LODWORD(v31) = v31 | 0x2000000;
      }
      *((_DWORD *)this + 63) = v31;
      goto LABEL_76;
    }
    LODWORD(v31) = v31 | 0x2000;
    *((_DWORD *)this + 63) = v31;
    if ( (*(_BYTE *)(v34 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
LABEL_76:
  LOBYTE(v39) = 18;
  *((_DWORD *)this + 41) = *(_DWORD *)v34;
  LOBYTE(v40) = 18;
  v41 = *(_DWORD *)(v34 + 4);
  *((_DWORD *)this + 42) = abs32(v41);
  a6 = (const struct tagENUMLOGFONTEXDVW *)*((_QWORD *)*v30 + 6);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a6, (unsigned int)(v41 >> 31), v19, v31) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v48 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v48 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v48 + 340) )
        {
          LOBYTE(v40) = *(_DWORD *)(v48 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v47, v43);
          if ( CurrentProcessWin32Process )
            v40 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  v50 = 96;
  v51 = *(unsigned int *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[6];
  if ( (v51 & 1) != 0 && (v40 & 0xFu) - 1 > 1 )
    v52 = 96;
  else
    v52 = *(_DWORD *)&a6[5].elfEnumLogfontEx.elfLogFont.lfFaceName[24];
  *((_DWORD *)this + 61) = v52;
  v53 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v51, v43, v44, v45) )
  {
    v54 = (__int64 *)PsGetThreadWin32Thread(v53);
    if ( v54 )
    {
      v57 = *v54;
      if ( *v54 )
      {
        if ( *(_QWORD *)(v57 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v54);
        if ( *(_DWORD *)(v57 + 340) )
        {
          LOBYTE(v39) = *(_DWORD *)(v57 + 340);
        }
        else
        {
          v58 = PsGetCurrentProcessWin32Process(v56, v55);
          if ( v58 )
            v39 = *(_DWORD *)(v58 + 280);
        }
      }
    }
  }
  v59 = a6;
  if ( (*(_DWORD *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[6] & 1) == 0 || (v39 & 0xFu) - 1 <= 1 )
    v50 = *(_DWORD *)&a6[5].elfEnumLogfontEx.elfLogFont.lfFaceName[26];
  *((_DWORD *)this + 62) = v50;
  *((_DWORD *)this + 63) |= (*(_DWORD *)&v59[5].elfEnumLogfontEx.elfLogFont.lfFaceName[28] >> 5) & 0x100;
  *((_DWORD *)this + 63) |= (*(_DWORD *)&v59[5].elfEnumLogfontEx.elfLogFont.lfFaceName[28] & 8) << 7;
  v60 = PDEVOBJ::cFonts((PDEVOBJ *)&a6);
  v61 = 0x10000;
  v62 = v60 != 0;
  v63 = 0x20000000;
  v64 = a6;
  *((_DWORD *)this + 63) |= v62 ? 0x200 : 0;
  v65 = *((_DWORD *)this + 41);
  if ( *(_DWORD *)&v64[5].elfEnumLogfontEx.elfLogFont.lfFaceName[6] )
    v61 = 0;
  v66 = *((_DWORD *)this + 63) | v61;
  *((_DWORD *)this + 63) = v66;
  if ( *(_DWORD *)&v64[5].elfEnumLogfontEx.elfLogFont.lfFaceName[6] != 4 )
    v63 = 0;
  v67 = v66 | v63;
  *((_DWORD *)this + 63) = v67;
  v68 = v65 < 0;
  if ( !v65 )
  {
    v65 = *(_DWORD *)&v64[4].elfEnumLogfontEx.elfFullName[28];
    v67 |= 8u;
    *((_DWORD *)this + 63) = v67;
    v68 = v65 < 0;
    *((_DWORD *)this + 41) = v65;
  }
  if ( v68 )
  {
    v67 |= 2u;
    *((_DWORD *)this + 63) = v67;
    *((_DWORD *)this + 41) = -v65;
  }
  v69 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v69;
  if ( !v69 )
  {
    v67 |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
    *((_DWORD *)this + 63) = v67;
  }
  if ( !**((_WORD **)this + 2) )
  {
    MAPPER::bGetFaceName(this);
    v67 = *((_DWORD *)this + 63);
  }
  result = this;
  *((_DWORD *)this + 63) = v67 | v33 & 0x40 | 1;
  return result;
}
