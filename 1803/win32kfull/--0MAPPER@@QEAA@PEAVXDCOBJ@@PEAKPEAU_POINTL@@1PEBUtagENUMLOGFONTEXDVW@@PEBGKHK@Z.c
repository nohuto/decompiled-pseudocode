/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0040BA0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C003F3CC (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0040A34 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C008AC68 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C013D380 (memmove.c)
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
  unsigned __int16 v19; // dx
  unsigned __int16 *v20; // rax
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // r8
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // cl
  DC **v30; // r10
  int v31; // r9d
  __int64 v32; // rax
  char v33; // bp
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // eax
  __int16 *v37; // rax
  __int16 v38; // cx
  int v39; // r9d
  int v40; // ebx
  int v41; // esi
  int v42; // kr00_4
  struct _KTHREAD *CurrentThread; // r14
  __int64 v44; // rdx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 CurrentProcessWin32Process; // rax
  int v49; // r14d
  __int64 v50; // rcx
  int v51; // eax
  struct _KTHREAD *v52; // rsi
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rax
  const struct tagENUMLOGFONTEXDVW *v57; // rax
  unsigned int v58; // eax
  int v59; // edx
  bool v60; // cf
  int v61; // r8d
  const struct tagENUMLOGFONTEXDVW *v62; // rax
  int v63; // ecx
  int v64; // edx
  int v65; // r8d
  bool v66; // sf
  int v67; // ecx
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
    v19 = v16[1];
    v20 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v19 - 48) <= 9u )
    {
      while ( v19 )
      {
        do
        {
          if ( v19 >= 0x30u )
          {
            v21 = v19;
            if ( v19 <= 0x39u )
              break;
          }
          v21 = v20[1];
          ++v20;
          v19 = v21;
        }
        while ( v21 );
        v19 = v21;
        if ( v21 )
        {
          v22 = v20[1];
          ++v20;
          v23 = v21 - 48;
          if ( v22 )
          {
            do
            {
              if ( (unsigned __int16)(v22 - 48) > 9u )
                break;
              ++v20;
              v24 = v22;
              v22 = *v20;
              v23 = v24 + 2 * (5 * v23 - 24);
            }
            while ( *v20 );
          }
          v25 = v14++;
          *((_DWORD *)this + v25 + 25) = v23;
          v19 = *v20;
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
  v31 = *((_DWORD *)this + 63) | ~(*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 40LL) << 11) & 0x40000;
  *((_DWORD *)this + 63) = v31;
  v32 = *((_QWORD *)*v30 + 10);
  if ( *(_DWORD *)(v32 + 68) == 1 && ((*(_DWORD *)(v32 + 352) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v30)) )
  {
    v33 = a10;
    v31 |= 0x1000u;
    *((_DWORD *)this + 63) = v31;
  }
  else
  {
    v33 = -65;
  }
  v34 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v34 + 26) == 2 )
  {
    v35 = *((_DWORD *)*v30 + 132);
    if ( (v35 & 1) == 0 || (v35 & 2) != 0 )
    {
      v31 |= 0x8000u;
      *((_DWORD *)this + 63) = v31;
    }
  }
  v36 = *(_DWORD *)(v34 + 16);
  if ( v36 == 400 || v36 == 700 )
  {
    v31 |= 0x10000000u;
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
        v39 = v31 | 0x800000;
      }
      else if ( v38 == 83 && v37[1] == 89 && v37[2] == 77 && v37[3] == 66 && v37[4] == 79 && v37[5] == 76 )
      {
        v39 = v31 | 0x4000000;
      }
      else
      {
        if ( v38 != 64 )
          goto LABEL_76;
        v39 = v31 | 0x2000000;
      }
      *((_DWORD *)this + 63) = v39;
      goto LABEL_76;
    }
    *((_DWORD *)this + 63) = v31 | 0x2000;
    if ( (*(_BYTE *)(v34 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
LABEL_76:
  LOBYTE(v40) = 18;
  *((_DWORD *)this + 41) = *(_DWORD *)v34;
  LOBYTE(v41) = 18;
  v42 = *(_DWORD *)(v34 + 4);
  *((_DWORD *)this + 42) = abs32(v42);
  a6 = (const struct tagENUMLOGFONTEXDVW *)*((_QWORD *)*v30 + 6);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a6, (unsigned int)(v42 >> 31)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v47 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v47 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v47 + 340) )
        {
          LOBYTE(v41) = *(_DWORD *)(v47 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v46);
          if ( CurrentProcessWin32Process )
            v41 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  v49 = 96;
  v50 = *(unsigned int *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[6];
  if ( (v50 & 1) != 0 && (v41 & 0xFu) - 1 > 1 )
    v51 = 96;
  else
    v51 = *(_DWORD *)&a6[5].elfEnumLogfontEx.elfLogFont.lfFaceName[20];
  *((_DWORD *)this + 61) = v51;
  v52 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v50, v44) )
  {
    v53 = (_QWORD *)PsGetThreadWin32Thread(v52);
    if ( v53 )
    {
      v55 = *v53;
      if ( *v53 )
      {
        if ( *(_QWORD *)(v55 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v53);
        if ( *(_DWORD *)(v55 + 340) )
        {
          LOBYTE(v40) = *(_DWORD *)(v55 + 340);
        }
        else
        {
          v56 = PsGetCurrentProcessWin32Process(v54);
          if ( v56 )
            v40 = *(_DWORD *)(v56 + 280);
        }
      }
    }
  }
  v57 = a6;
  if ( (*(_DWORD *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[6] & 1) == 0 || (v40 & 0xFu) - 1 <= 1 )
    v49 = *(_DWORD *)&a6[5].elfEnumLogfontEx.elfLogFont.lfFaceName[22];
  *((_DWORD *)this + 62) = v49;
  *((_DWORD *)this + 63) |= (*(_DWORD *)&v57[5].elfEnumLogfontEx.elfLogFont.lfFaceName[24] >> 5) & 0x100;
  *((_DWORD *)this + 63) |= (*(_DWORD *)&v57[5].elfEnumLogfontEx.elfLogFont.lfFaceName[24] & 8) << 7;
  v58 = PDEVOBJ::cFonts((PDEVOBJ *)&a6);
  v59 = 0x10000;
  v60 = v58 != 0;
  v61 = 0x20000000;
  v62 = a6;
  *((_DWORD *)this + 63) |= v60 ? 0x200 : 0;
  v63 = *((_DWORD *)this + 41);
  if ( *(_DWORD *)&v62[5].elfEnumLogfontEx.elfLogFont.lfFaceName[2] )
    v59 = 0;
  v64 = *((_DWORD *)this + 63) | v59;
  *((_DWORD *)this + 63) = v64;
  if ( *(_DWORD *)&v62[5].elfEnumLogfontEx.elfLogFont.lfFaceName[2] != 4 )
    v61 = 0;
  v65 = v64 | v61;
  *((_DWORD *)this + 63) = v65;
  v66 = v63 < 0;
  if ( !v63 )
  {
    v63 = *(_DWORD *)&v62[4].elfEnumLogfontEx.elfFullName[24];
    v65 |= 8u;
    *((_DWORD *)this + 63) = v65;
    v66 = v63 < 0;
    *((_DWORD *)this + 41) = v63;
  }
  if ( v66 )
  {
    v65 |= 2u;
    *((_DWORD *)this + 63) = v65;
    *((_DWORD *)this + 41) = -v63;
  }
  v67 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v67;
  if ( !v67 )
  {
    v65 |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
    *((_DWORD *)this + 63) = v65;
  }
  if ( !**((_WORD **)this + 2) )
  {
    MAPPER::bGetFaceName(this);
    v65 = *((_DWORD *)this + 63);
  }
  result = this;
  *((_DWORD *)this + 63) = v65 | v33 & 0x40 | 1;
  return result;
}
