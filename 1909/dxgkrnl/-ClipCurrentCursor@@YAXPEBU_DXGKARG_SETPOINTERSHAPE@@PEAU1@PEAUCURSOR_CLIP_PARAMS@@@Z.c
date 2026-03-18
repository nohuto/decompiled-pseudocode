/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0256A60
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D7438 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  const struct _DXGKARG_SETPOINTERSHAPE *v5; // rsi
  __int64 Height; // rdx
  UINT v7; // r14d
  int v8; // edi
  UINT Pitch; // r8d
  int v10; // edi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  UINT v14; // ebp
  UINT v15; // edi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // r9
  _BYTE *v20; // r10
  const void *v21; // rcx
  char v22; // si
  char v23; // r12
  char v24; // r13
  void *v25; // rax
  char v26; // al
  bool v27; // zf
  UINT v28; // r14d
  UINT v29; // edi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE *v33; // rsi
  _BYTE *v34; // r14
  unsigned int v35; // ecx
  __int64 v36; // r13
  char v37; // dl
  char v38; // r12
  __int64 v39; // r15
  void *v40; // rbx
  const void *v41; // rbp
  unsigned int v42; // edi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  _BYTE *v46; // rsi
  _BYTE *v47; // r14
  unsigned int v48; // ecx
  char v49; // dl
  char v50; // r12
  __int64 v51; // r15
  __int64 v52; // r13
  void *v53; // rbx
  const void *v54; // rbp
  _BYTE *v55; // [rsp+20h] [rbp-68h]
  __int64 v56; // [rsp+28h] [rbp-60h]
  __int64 v57; // [rsp+30h] [rbp-58h]
  const struct _DXGKARG_SETPOINTERSHAPE *v58; // [rsp+90h] [rbp+8h]
  char v59; // [rsp+90h] [rbp+8h]
  char v60; // [rsp+90h] [rbp+8h]
  _BYTE *v61; // [rsp+98h] [rbp+10h]
  char v62; // [rsp+98h] [rbp+10h]
  char v63; // [rsp+98h] [rbp+10h]
  _BYTE *v64; // [rsp+A0h] [rbp+18h]
  _BYTE *v65; // [rsp+A8h] [rbp+20h]

  v58 = a1;
  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  v5 = a1;
  Height = a1->Height;
  v7 = 0;
  v8 = *((_DWORD *)a3 + 5);
  a2->Height = Height;
  Pitch = a1->Pitch;
  a2->Pitch = Pitch;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  if ( (v8 & 1) != 0 )
    v7 = a1->Pitch * (a1->Height - *((_DWORD *)a3 + 1));
  v10 = v8 & 4;
  if ( v10 )
  {
    a1 = (const struct _DXGKARG_SETPOINTERSHAPE *)(a1->Width - *(_DWORD *)a3);
    if ( (v5->Flags.Value & 1) != 0 )
    {
      a1 = (const struct _DXGKARG_SETPOINTERSHAPE *)((unsigned int)a1 >> 3);
      v7 += (unsigned int)a1;
    }
    else
    {
      v7 += 4 * (_DWORD)a1;
    }
  }
  v11 = *((_DWORD *)a3 + 3);
  if ( (v5->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, (unsigned int)Height * Pitch);
    if ( v11 )
    {
      v14 = *(_DWORD *)a3;
      if ( v10 )
        v15 = v14 + 8 * v5->Pitch - v5->Width;
      else
        v15 = *(_DWORD *)a3;
      v16 = v15 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v17 + 24) = 143LL;
        WdLogEvent5_WdAssertion(v17);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v18 + 24) = 144LL;
        WdLogEvent5_WdAssertion(v18);
      }
      v14 = *(_DWORD *)a3;
      v16 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v19 = (char *)a2->pPixels + v7;
    v20 = (char *)v5->pPixels + v7;
    v21 = (const void *)*((unsigned int *)a3 + 1);
    v65 = v19;
    v55 = v20;
    if ( (_DWORD)v21 )
    {
      v22 = *((_BYTE *)a3 + 16);
      v23 = 8 - *((_BYTE *)a3 + 17);
      v24 = *((_BYTE *)a3 + 17);
      v57 = *((unsigned int *)a3 + 2);
      v56 = *((unsigned int *)a3 + 1);
      do
      {
        v25 = v19;
        v21 = v20;
        v61 = v19;
        v64 = v20;
        if ( v22 )
        {
          v12 = 1LL;
          v21 = v20 + 1;
          v64 = v20 + 1;
          v26 = (1 << v22) - 1;
          LOBYTE(v12) = *v20 & v26;
          *v19 = v12 | *v19 & ~v26;
          v25 = v19 + 1;
          v61 = v19 + 1;
        }
        if ( (_DWORD)v16 )
        {
          memmove(v25, v21, (unsigned int)v16);
          v19 = v65;
          v20 = v55;
        }
        if ( v24 )
        {
          v21 = v64;
          LOBYTE(v21) = ((1 << v23) - 1) & v61[v16] | ~((1 << v23) - 1) & v64[v16];
          v61[v16] = (_BYTE)v21;
        }
        v19 += v57;
        v20 += v57;
        v27 = v56-- == 1;
        v65 = v19;
        v55 = v20;
      }
      while ( !v27 );
      v5 = v58;
    }
    v28 = a2->Height * a2->Pitch + v7;
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( (*((_DWORD *)a3 + 5) & 4) != 0 )
        v29 = v14 + 8 * v5->Pitch - v5->Width;
      else
        v29 = v14;
      v30 = v29 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v21, v12);
        *(_QWORD *)(v31 + 24) = 143LL;
        WdLogEvent5_WdAssertion(v31);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v21, v12);
        *(_QWORD *)(v32 + 24) = 144LL;
        WdLogEvent5_WdAssertion(v32);
      }
      v30 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v33 = (char *)v5->pPixels + v28;
    v34 = (char *)a2->pPixels + v28;
    v35 = *((_DWORD *)a3 + 1);
    if ( v35 )
    {
      v36 = v35;
      v37 = *((_BYTE *)a3 + 16);
      v38 = 8 - *((_BYTE *)a3 + 17);
      v39 = *((unsigned int *)a3 + 2);
      v62 = v37;
      v59 = *((_BYTE *)a3 + 17);
      do
      {
        v40 = v34;
        v41 = v33;
        if ( v37 )
        {
          v40 = v34 + 1;
          v41 = v33 + 1;
          *v34 = ((1 << v37) - 1) & *v33 | *v34 & ~((1 << v37) - 1);
        }
        if ( (_DWORD)v30 )
          memmove(v40, v41, (unsigned int)v30);
        if ( v59 )
          *((_BYTE *)v40 + v30) = ((1 << v38) - 1) & *((_BYTE *)v40 + v30) | ~((1 << v38) - 1) & *((_BYTE *)v41 + v30);
        v37 = v62;
        v34 += v39;
        v33 += v39;
        --v36;
      }
      while ( v36 );
    }
  }
  else
  {
    if ( v11 )
    {
      if ( v10 )
        v42 = *(_DWORD *)a3 + 8 * v5->Pitch - v5->Width;
      else
        v42 = *(_DWORD *)a3;
      v43 = v42 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v44 = WdLogNewEntry5_WdAssertion(a1, Height);
        *(_QWORD *)(v44 + 24) = 143LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v45 = WdLogNewEntry5_WdAssertion(a1, Height);
        *(_QWORD *)(v45 + 24) = 144LL;
        WdLogEvent5_WdAssertion(v45);
      }
      v43 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v46 = (char *)v5->pPixels + v7;
    v47 = (char *)a2->pPixels + v7;
    v48 = *((_DWORD *)a3 + 1);
    if ( v48 )
    {
      v49 = *((_BYTE *)a3 + 16);
      v50 = 8 - *((_BYTE *)a3 + 17);
      v51 = *((unsigned int *)a3 + 2);
      v52 = v48;
      v63 = v49;
      v60 = *((_BYTE *)a3 + 17);
      do
      {
        v53 = v47;
        v54 = v46;
        if ( v49 )
        {
          v53 = v47 + 1;
          v54 = v46 + 1;
          *v47 = ((1 << v49) - 1) & *v46 | *v47 & ~((1 << v49) - 1);
        }
        if ( (_DWORD)v43 )
          memmove(v53, v54, (unsigned int)v43);
        if ( v60 )
          *((_BYTE *)v53 + v43) = ((1 << v50) - 1) & *((_BYTE *)v53 + v43) | ~((1 << v50) - 1) & *((_BYTE *)v54 + v43);
        v49 = v63;
        v47 += v51;
        v46 += v51;
        --v52;
      }
      while ( v52 );
    }
  }
}
