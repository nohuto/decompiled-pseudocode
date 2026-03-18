/*
 * XREFs of ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x1C001F278
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015BE84 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009B80 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::CheckMcdmDdiSubmission(DXGADAPTER *this)
{
  int v3; // ebx
  char v4; // si
  char v5; // r14
  char v6; // bp
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 v14; // ax
  char *v15; // rcx
  __int64 v16; // r10
  char v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax

  if ( (*((_DWORD *)this + 606) & 8) == 0 )
    return 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
    if ( (unsigned int)v8 >= NumDifferentPhysicalAdapters )
      break;
    v12 = *((_QWORD *)this + 305) + 352LL * (unsigned int)v8;
    v13 = *(_QWORD *)(v12 + 24);
    if ( v13 )
    {
      v14 = *(_WORD *)v12;
      if ( *(_WORD *)v12 )
      {
        v15 = (char *)(v13 + 73);
        v16 = v14;
        do
        {
          v17 = *v15;
          if ( *(v15 - 1) || v17 )
          {
            if ( (*(v15 - 5) & 1) != 0 )
              v5 = 1;
            else
              v4 = 1;
            if ( v17 )
              v6 = 1;
          }
          v15 += 74;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  v18 = *((_QWORD *)this + 48);
  if ( v11 )
  {
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v19 + 24) = 264LL;
      WdLogEvent5_WdError(v19);
      v3 = 1;
    }
    if ( !*((_QWORD *)this + 75) )
    {
      v20 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v20 + 24) = 265LL;
      WdLogEvent5_WdError(v20);
      ++v3;
    }
    if ( !*((_QWORD *)this + 49) )
    {
      v21 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v21 + 24) = 266LL;
LABEL_30:
      WdLogEvent5_WdError(v21);
      ++v3;
    }
  }
  else
  {
    if ( v18 )
    {
      v22 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v22 + 24) = 270LL;
      WdLogEvent5_WdError(v22);
      v3 = 1;
    }
    if ( *((_QWORD *)this + 75) )
    {
      v23 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v23 + 24) = 271LL;
      WdLogEvent5_WdError(v23);
      ++v3;
    }
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_SUBMITCOMMAND *))this + 49) != DXGADAPTER::DefaultDdiSubmitCommand )
    {
      v21 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v21 + 24) = 272LL;
      goto LABEL_30;
    }
  }
  v24 = *((_QWORD *)this + 105);
  if ( v4 )
  {
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v25 + 24) = 277LL;
      WdLogEvent5_WdError(v25);
      ++v3;
    }
    if ( !*((_QWORD *)this + 106) )
    {
      v26 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v26 + 24) = 278LL;
      WdLogEvent5_WdError(v26);
      ++v3;
    }
    if ( !*((_QWORD *)this + 102) )
    {
      v27 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v27 + 24) = 279LL;
      WdLogEvent5_WdError(v27);
      ++v3;
    }
    if ( !*((_QWORD *)this + 101) )
    {
      v28 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v28 + 24) = 280LL;
      WdLogEvent5_WdError(v28);
      ++v3;
    }
    if ( !*((_QWORD *)this + 100) )
    {
      v29 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v29 + 24) = 281LL;
LABEL_56:
      WdLogEvent5_WdError(v29);
      ++v3;
    }
  }
  else
  {
    if ( v24 )
    {
      v30 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v30 + 24) = 287LL;
      WdLogEvent5_WdError(v30);
      ++v3;
    }
    if ( *((_QWORD *)this + 106) )
    {
      v31 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v31 + 24) = 288LL;
      WdLogEvent5_WdError(v31);
      ++v3;
    }
    if ( *((_QWORD *)this + 102) )
    {
      v32 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v32 + 24) = 289LL;
      WdLogEvent5_WdError(v32);
      ++v3;
    }
    if ( *((_QWORD *)this + 101) )
    {
      v33 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v33 + 24) = 290LL;
      WdLogEvent5_WdError(v33);
      ++v3;
    }
    if ( *((_QWORD *)this + 100) )
    {
      v34 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v34 + 24) = 291LL;
      WdLogEvent5_WdError(v34);
      ++v3;
    }
    if ( *((_QWORD *)this + 103) )
    {
      v35 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v35 + 24) = 292LL;
      WdLogEvent5_WdError(v35);
      ++v3;
    }
    if ( *((_QWORD *)this + 104) )
    {
      v29 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v29 + 24) = 293LL;
      goto LABEL_56;
    }
  }
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 151) )
    {
      v36 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v36 + 24) = 298LL;
      WdLogEvent5_WdError(v36);
      ++v3;
    }
    if ( !*((_QWORD *)this + 152) )
    {
      v37 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v37 + 24) = 299LL;
      WdLogEvent5_WdError(v37);
      ++v3;
    }
  }
  if ( !v5 )
  {
    if ( *((_QWORD *)this + 121) )
    {
      v38 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v38 + 24) = 304LL;
      WdLogEvent5_WdError(v38);
      ++v3;
    }
    if ( *((_QWORD *)this + 123) )
    {
      v39 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v39 + 24) = 305LL;
      WdLogEvent5_WdError(v39);
      ++v3;
    }
    if ( *((_QWORD *)this + 122) )
    {
      v40 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v40 + 24) = 306LL;
      WdLogEvent5_WdError(v40);
      ++v3;
    }
    if ( *((_QWORD *)this + 124) )
    {
      v41 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v41 + 24) = 307LL;
      WdLogEvent5_WdError(v41);
      ++v3;
    }
    if ( *((_QWORD *)this + 127) )
    {
      v42 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v42 + 24) = 308LL;
      WdLogEvent5_WdError(v42);
      ++v3;
    }
    if ( *((_QWORD *)this + 149) )
    {
      v43 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v43 + 24) = 309LL;
      WdLogEvent5_WdError(v43);
      ++v3;
    }
    if ( *((_QWORD *)this + 128) )
    {
      v44 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v44 + 24) = 310LL;
      WdLogEvent5_WdError(v44);
      ++v3;
    }
    if ( *((_QWORD *)this + 147) )
    {
      v45 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v45 + 24) = 311LL;
      WdLogEvent5_WdError(v45);
      ++v3;
    }
    if ( *((_QWORD *)this + 144) )
    {
      v46 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v46 + 24) = 312LL;
      WdLogEvent5_WdError(v46);
      ++v3;
    }
    if ( *((_QWORD *)this + 145) )
    {
      v47 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v47 + 24) = 313LL;
      WdLogEvent5_WdError(v47);
      ++v3;
    }
    if ( *((_QWORD *)this + 155) )
    {
      v48 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v48 + 24) = 314LL;
      WdLogEvent5_WdError(v48);
      ++v3;
    }
    if ( *((_QWORD *)this + 125) )
    {
      v49 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v49 + 24) = 315LL;
      WdLogEvent5_WdError(v49);
      ++v3;
    }
    if ( *((_QWORD *)this + 148) )
    {
      v50 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v50 + 24) = 316LL;
      WdLogEvent5_WdError(v50);
      ++v3;
    }
    if ( *((_QWORD *)this + 126) )
    {
      v51 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v51 + 24) = 317LL;
      WdLogEvent5_WdError(v51);
      ++v3;
    }
    if ( *((_QWORD *)this + 141) )
    {
      v52 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v52 + 24) = 318LL;
      WdLogEvent5_WdError(v52);
      ++v3;
    }
  }
  if ( !v3 )
    return 0LL;
  return 3221225561LL;
}
