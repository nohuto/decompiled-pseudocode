/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0154078
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0153FB8 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C023F46C (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this)
{
  unsigned int v2; // eax
  SIZE_T v3; // rax
  unsigned __int64 v4; // kr00_8
  PVOID v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebp
  AUTOEXPANDALLOCATION *v8; // rax
  AUTOEXPANDALLOCATION *v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  void *v13; // rcx
  SIZE_T v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = 982LL;
    WdLogEvent5_WdError(v16);
    return 3221227272LL;
  }
  else
  {
    v2 = *((_DWORD *)this + 13);
    if ( v2 )
    {
      v4 = v2;
      v3 = 32LL * v2;
      if ( !is_mul_ok(v4, 0x20uLL) )
        v3 = -1LL;
      v5 = operator new(v3, 0x674D444Fu, PagedPool);
      *((_QWORD *)this + 2) = v5;
      if ( v5 )
      {
        v7 = 0;
        if ( !*((_DWORD *)this + 13) )
          return 0LL;
        while ( 1 )
        {
          v8 = (AUTOEXPANDALLOCATION *)operator new(0x10uLL, 0x674D444Fu, PagedPool);
          v9 = v8;
          if ( v8 )
          {
            *(_QWORD *)v8 = 0LL;
            *((_QWORD *)v8 + 1) = 0LL;
            AUTOEXPANDALLOCATION::GetBuffer(v8, 0x100u, 0);
          }
          else
          {
            v9 = 0LL;
          }
          v10 = 32LL * v7;
          *(_QWORD *)(v10 + *((_QWORD *)this + 2) + 16) = v9;
          v11 = *(_QWORD **)(v10 + *((_QWORD *)this + 2) + 16);
          if ( !v11 || !*v11 )
            break;
          v12 = operator new(0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
          v13 = v12;
          if ( v12 )
          {
            *v12 = 0LL;
            v12[1] = 0LL;
            *((_DWORD *)v12 + 6) = 0;
            *((_DWORD *)v12 + 7) = 42;
            *((_DWORD *)v12 + 8) = 8;
            v12[2] = 0LL;
          }
          else
          {
            v13 = 0LL;
          }
          *(_QWORD *)(v10 + *((_QWORD *)this + 2)) = v13;
          if ( !*(_QWORD *)(v10 + *((_QWORD *)this + 2)) )
            goto LABEL_22;
          v14 = 8LL * *((unsigned int *)this + 2);
          if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
            v14 = -1LL;
          *(_QWORD *)(v10 + *((_QWORD *)this + 2) + 8) = operator new[](v14, 0x674D444Fu, PagedPool);
          v13 = *(void **)(v10 + *((_QWORD *)this + 2) + 8);
          if ( !v13 )
          {
LABEL_22:
            v18 = WdLogNewEntry5_WdLowResource(v13);
            *(_QWORD *)(v18 + 24) = v7;
            goto LABEL_23;
          }
          memset(v13, 0, 8LL * *((unsigned int *)this + 2));
          ++v7;
          *(_DWORD *)(v10 + *((_QWORD *)this + 2) + 24) = 0;
          if ( v7 >= *((_DWORD *)this + 13) )
            return 0LL;
        }
        v18 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v18 + 24) = 1007LL;
      }
      else
      {
        v18 = WdLogNewEntry5_WdLowResource(v6);
        *(_QWORD *)(v18 + 24) = 995LL;
      }
LABEL_23:
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v17 + 24) = 987LL;
      WdLogEvent5_WdError(v17);
      return 3221225485LL;
    }
  }
}
