/*
 * XREFs of GreCombineRgn @ 0x1C003A8B0
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C00298B0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserValidateCopyRgn @ 0x1C003A790 (UserValidateCopyRgn.c)
 *     NtGdiCombineRgn @ 0x1C003A890 (NtGdiCombineRgn.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 *     EngCombineRgn @ 0x1C0106F40 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C0106FE0 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C01072F0 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C01074F0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0107590 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0107630 (EngXorRgn.c)
 * Callees:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C001E4E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0023D60 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00244A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025400 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0070AF0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  struct OBJECT *v8; // rax
  unsigned int v9; // ebx
  RGNOBJAPI *v10; // rcx
  __int64 v11; // rcx
  struct OBJECT *v12; // rax
  __int64 v13; // r8
  struct OBJECT *v14; // rax
  struct OBJECT *v15; // rcx
  struct OBJECT **v16; // rcx
  struct OBJECT *v18[2]; // [rsp+28h] [rbp-79h] BYREF
  struct OBJECT *v19[7]; // [rsp+38h] [rbp-69h] BYREF
  struct OBJECT *v20[7]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v21[8]; // [rsp+A8h] [rbp+7h] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a1, 0, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, a4 - 4, 0);
      v8 = v19[0];
      v9 = 0;
      if ( v19[0] )
      {
        if ( !v20[0] )
        {
LABEL_10:
          EngSetLastError(6u);
          goto LABEL_11;
        }
        if ( (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v19, (struct RGNOBJ *)v20) )
        {
          v9 = RGNOBJ::iComplexity((RGNOBJ *)v19);
LABEL_11:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
          v10 = (RGNOBJAPI *)v19;
LABEL_32:
          RGNOBJAPI::~RGNOBJAPI(v10);
          return v9;
        }
        v8 = v19[0];
      }
      if ( v20[0] && v8 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a1, 0, 1);
      v11 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        v12 = v20[0];
        if ( v20[0] && v19[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v19, (struct RGNOBJ *)v21, (struct RGNOBJ *)v20, a4) )
          {
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v19);
LABEL_24:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
LABEL_31:
            v10 = (RGNOBJAPI *)v21;
            goto LABEL_32;
          }
          v11 = v21[0];
          v12 = v20[0];
        }
        if ( v11 && v12 && v19[0] )
          goto LABEL_24;
      }
      EngSetLastError(6u);
      goto LABEL_24;
    }
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a1, 0, 1);
      v13 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
        {
          *(_DWORD *)(v21[0] + 80LL) = 120;
          *(_QWORD *)(v13 + 84) = 1LL;
          *(_QWORD *)(v13 + 92) = 0LL;
          *(_DWORD *)(v13 + 100) = 0;
          *(_DWORD *)(v13 + 104) = 0;
          *(_DWORD *)(v13 + 108) = 0x80000000;
          *(_QWORD *)(v13 + 112) = 0x7FFFFFFFLL;
          *(_QWORD *)(v13 + 40) = v13 + 120;
        }
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v21);
      }
      else
      {
        EngSetLastError(6u);
      }
      goto LABEL_31;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18, 0LL, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
    v9 = 0;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, 0, a1 == a2);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 0, a1 == a3);
    if ( v18[0] )
    {
      v14 = v19[0];
      if ( !v19[0] )
      {
LABEL_46:
        EngSetLastError(6u);
        goto LABEL_47;
      }
      v15 = v20[0];
      if ( !v20[0] )
      {
LABEL_44:
        if ( v14 && v15 )
          goto LABEL_47;
        goto LABEL_46;
      }
      if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)v19, (struct RGNOBJ *)v20, a4) )
      {
        if ( a1 == a2 )
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap(v19, v18) )
          {
LABEL_47:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
            return v9;
          }
          v16 = v19;
        }
        else
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap(v20, v18) )
            goto LABEL_47;
          v16 = v20;
        }
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v16);
        goto LABEL_47;
      }
    }
    v14 = v19[0];
    v15 = v20[0];
    goto LABEL_44;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
