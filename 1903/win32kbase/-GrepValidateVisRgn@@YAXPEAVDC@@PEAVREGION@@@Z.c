/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0019BF0
 * Callers:
 *     GreValidateVisrgn @ 0x1C0016244 (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0011D3C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0026DA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0053BF0 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  int v2; // eax
  struct REGION *v3; // rbp
  __int64 v5; // rbx
  struct OBJECT *v6; // rdi
  struct OBJECT *v7; // r9
  int v8; // eax
  LONG v9; // edx
  LONG v10; // r11d
  LONG v11; // r8d
  LONG v12; // r10d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+50h] [rbp-48h] BYREF
  struct _RECTL v18; // [rsp+60h] [rbp-38h] BYREF

  v2 = *((_DWORD *)a1 + 9);
  v3 = a2;
  if ( (v2 & 0x100000) != 0 )
  {
    v5 = *((_QWORD *)a1 + 6);
    if ( v5 )
    {
      if ( a2 )
      {
        v6 = 0LL;
        if ( (v2 & 0x40000) != 0 )
        {
          v16 = *((_QWORD *)a1 + 263);
          if ( v16 )
          {
            LOBYTE(a2) = 5;
            v6 = (struct OBJECT *)HmgShareLockCheck(v16, a2);
            v7 = v6;
          }
          else
          {
            v7 = *(struct OBJECT **)(v5 + 2552);
          }
        }
        else
        {
          v7 = (struct OBJECT *)*((_QWORD *)a1 + 62);
        }
        if ( v7 && ((*(_DWORD *)(v5 + 40) & 0x20000) == 0 || *(int *)(*((_QWORD *)a1 + 62) + 112LL) >= 0) )
        {
          v8 = *((_DWORD *)a1 + 9);
          v9 = *((_DWORD *)v3 + 22);
          v10 = *((_DWORD *)v3 + 23);
          v11 = *((_DWORD *)v3 + 24);
          v12 = *((_DWORD *)v3 + 25);
          v18.left = v9;
          v18.top = v10;
          v18.right = v11;
          v18.bottom = v12;
          if ( ((v8 & 0x1000) == 0 || (v8 & 0x4000) != 0)
            && v9 != v11
            && v10 != v12
            && (v9 != 0x7FFFFFFF || v12 != 0x80000000 || v11 != 0x80000000 || v10 != 0x7FFFFFFF) )
          {
            v13 = (*((_DWORD *)v7 + 29) & 0x800) == 0;
            v14 = 56LL;
            v17[0] = 0LL;
            if ( !v13 )
              v14 = 668LL;
            v15 = *(_QWORD *)((char *)v7 + v14);
            v17[1] = v15;
            if ( v9 >= v11 || v10 >= v12 || v9 < 0 || (int)v15 < v11 || v10 < 0 || SHIDWORD(v15) < v12 )
            {
              DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v7, v3, 0LL, 0LL, 0);
              ERECTL::vOrder((ERECTL *)&v18);
              ERECTL::operator*=(&v18.left, (int *)v17);
              v17[0] = v3;
              RGNOBJ::vSet((RGNOBJ *)v17, &v18);
            }
          }
        }
        if ( v6 )
          HmgDecrementShareReferenceCountEx(v6);
      }
    }
  }
}
