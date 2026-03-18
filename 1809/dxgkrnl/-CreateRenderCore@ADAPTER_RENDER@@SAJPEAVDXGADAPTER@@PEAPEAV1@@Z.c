/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014FB48
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C002D600 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C015C270 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C6030 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 (__fastcall *v9)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // r9d
  int DriverVersion; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  ADAPTER_RENDER *v18; // rax
  __int64 v19; // rcx
  ADAPTER_RENDER *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax

  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v31 + 24) = 490LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v32 + 24) = 491LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !*((_BYTE *)a1 + 185) )
  {
    if ( !*((_BYTE *)a1 + 312)
      || !a1[41]
      || !a1[43]
      || !a1[44]
      || !a1[74]
      || !a1[75]
      || !a1[45]
      || !a1[49]
      || !a1[50]
      || !a1[51]
      || !a1[55]
      || !a1[56]
      || !a1[59]
      || !a1[71]
      || !a1[73]
      || !a1[58]
      || !a1[77] )
    {
      if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1200 )
      {
        v30 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v30 + 24) = 567LL;
      }
      else
      {
        if ( !a1[41]
          && !a1[43]
          && !a1[44]
          && !a1[74]
          && !a1[75]
          && !a1[45]
          && !a1[49]
          && !a1[50]
          && !a1[51]
          && !a1[55]
          && !a1[56]
          && !a1[59]
          && !a1[73]
          && !a1[77]
          && !a1[42]
          && !a1[48]
          && !a1[76]
          && !a1[84]
          && !a1[46]
          && !a1[47]
          && !a1[70]
          && !a1[72]
          && !a1[78]
          && !a1[79]
          && !a1[80] )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26, v28, v29) + 24) = 555LL;
          result = 0LL;
          *a2 = 0LL;
          return result;
        }
        v30 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v30 + 24) = 549LL;
      }
      goto LABEL_135;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 519LL;
    v6 = a1[72];
    if ( !v6 )
    {
      a1[72] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v6 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v7 = a1[78];
    if ( !v7 )
    {
      a1[78] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v7 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v8 = a1[79];
    if ( !v8 )
    {
      a1[79] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v8 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v9 = a1[80];
    if ( !v9 )
    {
      a1[80] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v9 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    if ( !a1[70] )
      a1[70] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[46] )
      a1[46] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[47] )
      a1[47] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( v6 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      if ( v7 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v8 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v9 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      {
        goto LABEL_41;
      }
    }
    else if ( v9 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v8 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v7 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
LABEL_41:
      v10 = *((unsigned int *)a1 + 540);
      if ( (((_DWORD)v10 - 4096) & 0xFFFFFCFF) != 0 || (_DWORD)v10 == 4352 || a1[42] && a1[48] && a1[76] )
      {
        v11 = *((unsigned int *)a1 + 469);
        if ( (v11 & 4) != 0 )
        {
          if ( !a1[84] )
          {
            v33 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v33 + 24) = 649LL;
LABEL_109:
            WdLogEvent5_WdError(v33);
            return 3221225485LL;
          }
          if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1105 )
          {
            v35 = WdLogNewEntry5_WdWarning(v10, v9, v11);
            *(_QWORD *)(v35 + 24) = a1;
            WdLogEvent5_WdWarning(v35);
            *((_DWORD *)a1 + 469) &= ~4u;
            v11 = *((unsigned int *)a1 + 469);
            a1[84] = 0LL;
          }
          if ( (v11 & 0x20000000) != 0 )
          {
            v33 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v33 + 24) = 661LL;
            goto LABEL_109;
          }
        }
        if ( *((_DWORD *)a1 + 467) > 4u )
          *((_DWORD *)a1 + 467) = 4;
        if ( !*((_DWORD *)a1 + 466)
          || a1[46] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
          && a1[47] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
        {
          v12 = *((_DWORD *)a1 + 472);
          v13 = 0x2000;
          if ( (v12 & 1) != 0 )
          {
            if ( *((int *)a1 + 540) >= 0x2000 )
              goto LABEL_61;
            v11 = *((unsigned int *)a1 + 475);
            if ( (_DWORD)v11 )
            {
              DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
              if ( (unsigned int)v16 > 0x40 && DriverVersion <= 2400 )
              {
                v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v15, v16);
                v34[3] = a1;
                v34[4] = 64LL;
                v34[5] = *((unsigned int *)a1 + 64);
                v34[6] = *((unsigned int *)a1 + 475);
                goto LABEL_111;
              }
              *((_DWORD *)a1 + 606) = v16;
LABEL_61:
              if ( *((_BYTE *)a1 + 2428)
                && *((int *)a1 + 540) >= 4608
                && (!*((_DWORD *)a1 + 588)
                 || !*((_DWORD *)a1 + 589)
                 || !*((_BYTE *)a1 + 2362)
                 || (*((_DWORD *)a1 + 471) & 2) == 0
                 || (*((_DWORD *)a1 + 77) & 0x10) == 0 && (*((_DWORD *)a1 + 469) & 4) == 0) )
              {
                v33 = WdLogNewEntry5_WdError(v10);
                *(_QWORD *)(v33 + 24) = 740LL;
                goto LABEL_109;
              }
              v17 = *((unsigned int *)a1 + 540);
              if ( (int)v17 >= v13 && (*((_DWORD *)a1 + 471) & 2) == 0 )
              {
                v33 = WdLogNewEntry5_WdError(v17);
                *(_QWORD *)(v33 + 24) = *((unsigned int *)a1 + 471);
                goto LABEL_109;
              }
              if ( (int)v17 >= 4864 && !a1[95] )
              {
                v33 = WdLogNewEntry5_WdError(v17);
                *(_QWORD *)(v33 + 24) = 762LL;
                goto LABEL_109;
              }
              if ( (int)v17 >= 9216 && (*((_DWORD *)a1 + 473) & 0x800) != 0 && (!a1[153] || !a1[154]) )
              {
                v33 = WdLogNewEntry5_WdError(v17);
                *(_QWORD *)(v33 + 24) = 777LL;
                goto LABEL_109;
              }
              goto LABEL_68;
            }
          }
          else if ( (v12 & 4) == 0 && (v12 & 0x10) == 0 )
          {
            *((_DWORD *)a1 + 475) = 1;
            *((_DWORD *)a1 + 606) = 1;
            goto LABEL_61;
          }
          v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
          v34[3] = a1;
LABEL_111:
          WdLogEvent5_WdWarning(v34);
          return 3221225485LL;
        }
        v30 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v30 + 24) = 676LL;
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v30 + 24) = 640LL;
      }
LABEL_135:
      WdLogEvent5_WdError(v30);
      return 3221225561LL;
    }
    v30 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v30 + 24) = 620LL;
    goto LABEL_135;
  }
LABEL_68:
  v18 = (ADAPTER_RENDER *)operator new(0x600uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v18 )
    v20 = ADAPTER_RENDER::ADAPTER_RENDER(v18, (struct DXGADAPTER *)a1);
  else
    v20 = 0LL;
  if ( v20 )
  {
    v23 = ADAPTER_RENDER::Initialize(v20);
    if ( v23 < 0 )
    {
      ADAPTER_RENDER::Destroy(v20);
      ADAPTER_RENDER::`scalar deleting destructor'(v20);
    }
    else
    {
      v24 = WdLogNewEntry5_WdEvent(v22, v21);
      *(_QWORD *)(v24 + 24) = v20;
      *(_QWORD *)(v24 + 32) = a1;
      WdLogEvent5_WdEvent(v24);
      *a2 = v20;
    }
    return (unsigned int)v23;
  }
  else
  {
    v36 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v36 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v36);
    return 3221225495LL;
  }
}
