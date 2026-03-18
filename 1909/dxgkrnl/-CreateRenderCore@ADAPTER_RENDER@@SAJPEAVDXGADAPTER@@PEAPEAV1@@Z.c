/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C016AD70
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C00326E0 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015FC34 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C016CDFC (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F5034 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2,
        __int64 a3)
{
  __int64 (__fastcall *v5)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  __int64 (__fastcall *v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  ADAPTER_RENDER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ADAPTER_RENDER *v19; // rdi
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v25 + 24) = 489LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v26 + 24) = 490LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !*((_BYTE *)a1 + 185) )
  {
    if ( !*((_BYTE *)a1 + 312)
      || !a1[41]
      || !a1[43]
      || !a1[44]
      || !a1[73]
      || !a1[74]
      || !a1[45]
      || !a1[49]
      || !a1[50]
      || !a1[51]
      || !a1[55]
      || !a1[56]
      || !a1[59] && *((int *)a1 + 613) < 2000
      || !a1[70] && ((_DWORD)a1[303] & 8) == 0
      || !a1[72]
      || !a1[58]
      || !a1[76] )
    {
      if ( *((int *)a1 + 613) < 1200 )
      {
        v24 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v24 + 24) = 566LL;
      }
      else
      {
        if ( !a1[41]
          && !a1[43]
          && !a1[44]
          && !a1[73]
          && !a1[74]
          && !a1[45]
          && !a1[49]
          && !a1[50]
          && !a1[51]
          && !a1[55]
          && !a1[56]
          && !a1[59]
          && !a1[72]
          && !a1[76]
          && !a1[42]
          && !a1[48]
          && !a1[75]
          && !a1[83]
          && !a1[46]
          && !a1[47]
          && !a1[69]
          && !a1[71]
          && !a1[77]
          && !a1[78]
          && !a1[79] )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = 554LL;
          result = 0LL;
          *a2 = 0LL;
          return result;
        }
        v24 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v24 + 24) = 548LL;
      }
      goto LABEL_139;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = 518LL;
    v5 = a1[71];
    if ( !v5 )
    {
      a1[71] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v5 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v6 = a1[77];
    if ( !v6 )
    {
      a1[77] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
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
    if ( !a1[69] )
      a1[69] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[46] )
      a1[46] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[47] )
      a1[47] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( v5 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      if ( v6 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v7 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v8 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      {
        goto LABEL_41;
      }
    }
    else if ( v8 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v7 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v6 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
LABEL_41:
      v9 = *((unsigned int *)a1 + 546);
      if ( (((_DWORD)v9 - 4096) & 0xFFFFFCFF) != 0 || (_DWORD)v9 == 4352 || a1[42] && a1[48] && a1[75] )
      {
        v10 = *((_DWORD *)a1 + 475);
        if ( (v10 & 4) != 0 )
        {
          if ( !a1[83] )
          {
            v27 = WdLogNewEntry5_WdError(v9, v8, v5);
            *(_QWORD *)(v27 + 24) = 648LL;
LABEL_113:
            WdLogEvent5_WdError(v27);
            return 3221225485LL;
          }
          if ( *((int *)a1 + 613) < 1105 )
          {
            v29 = WdLogNewEntry5_WdWarning(v9, v8, v5);
            *(_QWORD *)(v29 + 24) = a1;
            WdLogEvent5_WdWarning(v29);
            *((_DWORD *)a1 + 475) &= ~4u;
            v10 = *((_DWORD *)a1 + 475);
            a1[83] = 0LL;
          }
          if ( (v10 & 0x20000000) != 0 )
          {
            v27 = WdLogNewEntry5_WdError(v9, v8, v5);
            *(_QWORD *)(v27 + 24) = 660LL;
            goto LABEL_113;
          }
        }
        if ( *((_DWORD *)a1 + 473) > 4u )
          *((_DWORD *)a1 + 473) = 4;
        if ( !*((_DWORD *)a1 + 472)
          || a1[46] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
          && a1[47] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
        {
          v11 = *((_DWORD *)a1 + 478);
          if ( (v11 & 1) != 0 )
          {
            if ( *((int *)a1 + 546) >= 0x2000 )
              goto LABEL_61;
            v9 = *((unsigned int *)a1 + 481);
            if ( (_DWORD)v9 )
            {
              v12 = v9 * *((_DWORD *)a1 + 64);
              if ( v12 > 0x40 && *((int *)a1 + 613) <= 2400 )
              {
                v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, 0x2000LL, v5);
                v28[3] = a1;
                v28[4] = 64LL;
                v28[5] = *((unsigned int *)a1 + 64);
                v28[6] = *((unsigned int *)a1 + 481);
                goto LABEL_115;
              }
              *((_DWORD *)a1 + 612) = v12;
LABEL_61:
              if ( *((_BYTE *)a1 + 2464)
                && *((int *)a1 + 546) >= 4608
                && (!*((_DWORD *)a1 + 594)
                 || !*((_DWORD *)a1 + 595)
                 || !*((_BYTE *)a1 + 2386)
                 || (*((_DWORD *)a1 + 477) & 2) == 0
                 || (*((_DWORD *)a1 + 77) & 0x10) == 0 && (*((_DWORD *)a1 + 475) & 4) == 0) )
              {
                v27 = WdLogNewEntry5_WdError(v9, 0x2000LL, v5);
                *(_QWORD *)(v27 + 24) = 739LL;
                goto LABEL_113;
              }
              v13 = *((unsigned int *)a1 + 546);
              if ( (int)v13 >= 0x2000 && (*((_DWORD *)a1 + 477) & 2) == 0 )
              {
                v27 = WdLogNewEntry5_WdError(v13, 0x2000LL, v5);
                *(_QWORD *)(v27 + 24) = *((unsigned int *)a1 + 477);
                goto LABEL_113;
              }
              if ( (int)v13 >= 4864 && !a1[93] )
              {
                v27 = WdLogNewEntry5_WdError(v13, 0x2000LL, v5);
                *(_QWORD *)(v27 + 24) = 761LL;
                goto LABEL_113;
              }
              if ( (int)v13 >= 9216 && (*((_DWORD *)a1 + 479) & 0x800) != 0 && (!a1[151] || !a1[152]) )
              {
                v27 = WdLogNewEntry5_WdError(v13, 0x2000LL, v5);
                *(_QWORD *)(v27 + 24) = 776LL;
                goto LABEL_113;
              }
              goto LABEL_68;
            }
          }
          else if ( (v11 & 4) == 0 && (v11 & 0x10) == 0 )
          {
            *((_DWORD *)a1 + 481) = 1;
            *((_DWORD *)a1 + 612) = 1;
            goto LABEL_61;
          }
          v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, 0x2000LL, v5);
          v28[3] = a1;
LABEL_115:
          WdLogEvent5_WdWarning(v28);
          return 3221225485LL;
        }
        v24 = WdLogNewEntry5_WdError(v9, v8, v5);
        *(_QWORD *)(v24 + 24) = 675LL;
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v9, v8, v5);
        *(_QWORD *)(v24 + 24) = 639LL;
      }
LABEL_139:
      WdLogEvent5_WdError(v24);
      return 3221225561LL;
    }
    v24 = WdLogNewEntry5_WdError(v7, v8, v5);
    *(_QWORD *)(v24 + 24) = 619LL;
    goto LABEL_139;
  }
LABEL_68:
  v14 = (ADAPTER_RENDER *)operator new(0x600uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v14 )
    v19 = ADAPTER_RENDER::ADAPTER_RENDER(v14, (struct DXGADAPTER *)a1);
  else
    v19 = 0LL;
  if ( v19 )
  {
    v21 = ADAPTER_RENDER::Initialize(v19);
    if ( v21 < 0 )
    {
      ADAPTER_RENDER::Destroy(v19);
      ADAPTER_RENDER::`scalar deleting destructor'(v19);
    }
    else
    {
      v22 = WdLogNewEntry5_WdEvent(v20);
      *(_QWORD *)(v22 + 24) = v19;
      *(_QWORD *)(v22 + 32) = a1;
      WdLogEvent5_WdEvent(v22);
      *a2 = v19;
    }
    return (unsigned int)v21;
  }
  else
  {
    v30 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
    return 3221225495LL;
  }
}
