/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001B2B0
 * Callers:
 *     GreValidateVisrgn @ 0x1C0017B9C (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C000F2F0 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0015A4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AAB8 (--1EPALOBJ@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00272C0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00773A4 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00776C4 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C007856C (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  int v2; // eax
  struct REGION *v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  LONG v8; // ebx
  int v9; // eax
  LONG v10; // r11d
  LONG v11; // r14d
  LONG v12; // r10d
  __int64 v13; // r8
  __int64 v14; // rdx
  LONG v15; // edx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  struct OBJECT *v20; // [rsp+50h] [rbp-30h] BYREF
  struct _RECTL v21; // [rsp+58h] [rbp-28h] BYREF
  __m128i si128; // [rsp+68h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 9);
  v3 = a2;
  if ( (v2 & 0x100000) != 0 )
  {
    v5 = *((_QWORD *)a1 + 6);
    if ( v5 )
    {
      if ( a2 )
      {
        v20 = 0LL;
        if ( (v2 & 0x40000) != 0 )
        {
          v7 = *((_QWORD *)a1 + 263);
          if ( v7 )
          {
            LOBYTE(a2) = 5;
            v6 = HmgShareLockCheck(v7, a2);
            v20 = (struct OBJECT *)v6;
          }
          else
          {
            v6 = *(_QWORD *)(v5 + 2552);
          }
        }
        else
        {
          v6 = *((_QWORD *)a1 + 62);
        }
        if ( v6 && ((*(_DWORD *)(v5 + 40) & 0x20000) == 0 || *(int *)(v6 + 112) >= 0) )
        {
          v8 = *((_DWORD *)v3 + 22);
          v9 = *((_DWORD *)a1 + 9) & 0x5000;
          v10 = *((_DWORD *)v3 + 23);
          v11 = *((_DWORD *)v3 + 24);
          v12 = *((_DWORD *)v3 + 25);
          v21.left = v8;
          v21.top = v10;
          v21.right = v11;
          v21.bottom = v12;
          if ( v9 != 4096 && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v21) )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            if ( !(unsigned int)ERECTL::bEqual((ERECTL *)&v21, (const struct ERECTL *)&si128) )
            {
              v14 = -(__int64)((*(_DWORD *)(v13 + 116) & 0x800) != 0);
              si128.m128i_i64[0] = 0LL;
              si128.m128i_i64[1] = *(_QWORD *)((v14 & 0x264) + v13 + 56);
              if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v21) || v8 < 0 || v15 < v11 || v19 < 0 || v17 < v18 )
              {
                DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v16, v3, 0LL, 0LL, 0);
                ERECTL::vOrder((ERECTL *)&v21);
                ERECTL::operator*=(&v21.left, si128.m128i_i32);
                si128.m128i_i64[0] = (__int64)v3;
                RGNOBJ::vSet((RGNOBJ *)&si128, &v21);
              }
            }
          }
        }
        EPALOBJ::~EPALOBJ(&v20);
      }
    }
  }
}
