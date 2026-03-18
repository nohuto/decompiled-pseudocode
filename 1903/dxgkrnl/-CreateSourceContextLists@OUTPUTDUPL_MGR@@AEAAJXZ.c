/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0169DE0
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0169D20 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C02747BC (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  SIZE_T v5; // rax
  unsigned __int64 v6; // kr00_8
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  AUTOEXPANDALLOCATION *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  AUTOEXPANDALLOCATION *v17; // rdi
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rcx
  SIZE_T v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v27 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v27 + 24) = 982LL;
    WdLogEvent5_WdError(v27);
    return 3221227272LL;
  }
  else
  {
    v4 = *((_DWORD *)this + 13);
    if ( v4 )
    {
      v6 = v4;
      v5 = 32LL * v4;
      if ( !is_mul_ok(v6, 0x20uLL) )
        v5 = -1LL;
      v7 = operator new[](v5, 0x674D444Fu, PagedPool);
      *((_QWORD *)this + 2) = v7;
      if ( v7 )
      {
        v12 = 0;
        if ( !*((_DWORD *)this + 13) )
          return 0LL;
        while ( 1 )
        {
          v13 = (AUTOEXPANDALLOCATION *)operator new[](0x10uLL, 0x674D444Fu, PagedPool);
          v17 = v13;
          if ( v13 )
          {
            *(_QWORD *)v13 = 0LL;
            *((_QWORD *)v13 + 1) = 0LL;
            AUTOEXPANDALLOCATION::GetBuffer(v13, 0x100u, 0);
          }
          else
          {
            v17 = 0LL;
          }
          v18 = 32LL * v12;
          *(_QWORD *)(v18 + *((_QWORD *)this + 2) + 16) = v17;
          v19 = *(_QWORD **)(v18 + *((_QWORD *)this + 2) + 16);
          if ( !v19 || !*v19 )
            break;
          v20 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
          v24 = v20;
          if ( v20 )
          {
            *v20 = 0LL;
            v20[1] = 0LL;
            v20[2] = 0LL;
            *((_DWORD *)v20 + 6) = 0;
            *((_DWORD *)v20 + 7) = 42;
            *((_DWORD *)v20 + 8) = 8;
          }
          else
          {
            v24 = 0LL;
          }
          *(_QWORD *)(v18 + *((_QWORD *)this + 2)) = v24;
          if ( !*(_QWORD *)(v18 + *((_QWORD *)this + 2)) )
            goto LABEL_22;
          v25 = 8LL * *((unsigned int *)this + 2);
          if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
            v25 = -1LL;
          *(_QWORD *)(v18 + *((_QWORD *)this + 2) + 8) = operator new[](v25, 0x674D444Fu, PagedPool);
          v24 = *(void **)(v18 + *((_QWORD *)this + 2) + 8);
          if ( !v24 )
          {
LABEL_22:
            v29 = WdLogNewEntry5_WdLowResource(v24, v21, v22, v23);
            *(_QWORD *)(v29 + 24) = v12;
            goto LABEL_23;
          }
          memset(v24, 0, 8LL * *((unsigned int *)this + 2));
          ++v12;
          *(_DWORD *)(v18 + *((_QWORD *)this + 2) + 24) = 0;
          if ( v12 >= *((_DWORD *)this + 13) )
            return 0LL;
        }
        v29 = WdLogNewEntry5_WdLowResource(v19, v14, v15, v16);
        *(_QWORD *)(v29 + 24) = 1007LL;
      }
      else
      {
        v29 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
        *(_QWORD *)(v29 + 24) = 995LL;
      }
LABEL_23:
      WdLogEvent5_WdLowResource(v29);
      return 3221225495LL;
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(this, a2, a3);
      *(_QWORD *)(v28 + 24) = 987LL;
      WdLogEvent5_WdError(v28);
      return 3221225485LL;
    }
  }
}
