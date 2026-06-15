/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140037870
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14003735C (_lambda_70348e31779f8b8cef919996b578f4f9_--operator().c)
 */

__int64 __fastcall CAudioDeviceGraph::GetClientReleaseEvent(
        CAudioDeviceGraph *this,
        __int64 a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  struct CP_EVENT_METADATA_BLOB *v4; // rsi
  struct CP_EVENT_METADATA_BLOB *v5; // r14
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rax
  __int64 v39; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-D8h] BYREF
  char v41; // [rsp+40h] [rbp-C8h]
  _BYTE v42[304]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v43[304]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]
  __int64 v45; // [rsp+2C8h] [rbp+1C0h] BYREF

  v4 = a4;
  v5 = a3;
  if ( !*((_QWORD *)this + 19) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x309,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    return 2289827859LL;
  }
  *(_DWORD *)a3 = 0;
  *(_DWORD *)a4 = 0;
  v8 = *((_QWORD *)this + 19);
  v39 = 0LL;
  v45 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v8 + 72LL))(v8, &v45, &v39);
  v10 = v9;
  if ( v9 >= 0 )
  {
    memset_0(v42, 0, 0x128uLL);
    v12 = v45;
    if ( v45 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v45 + 32LL))(v45, v42);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 789LL;
        goto LABEL_8;
      }
      v12 = v45;
    }
    v40[0] = this;
    v40[1] = v42;
    memset_0(v43, 0, 0x128uLL);
    v13 = v39;
    if ( v39 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v39 + 32LL))(v39, v43);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x320,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v14);
        v41 = 0;
        lambda_70348e31779f8b8cef919996b578f4f9_::operator()(v40);
        goto LABEL_9;
      }
      v12 = v45;
      v13 = v39;
    }
    v15 = 2LL;
    v16 = v42;
    v17 = 2LL;
    do
    {
      v18 = v16[1];
      *(_OWORD *)v5 = *v16;
      v19 = v16[2];
      *((_OWORD *)v5 + 1) = v18;
      v20 = v16[3];
      *((_OWORD *)v5 + 2) = v19;
      v21 = v16[4];
      *((_OWORD *)v5 + 3) = v20;
      v22 = v16[5];
      *((_OWORD *)v5 + 4) = v21;
      v23 = v16[6];
      *((_OWORD *)v5 + 5) = v22;
      v24 = v16[7];
      v16 += 8;
      *((_OWORD *)v5 + 6) = v23;
      v5 = (struct CP_EVENT_METADATA_BLOB *)((char *)v5 + 128);
      *((_OWORD *)v5 - 1) = v24;
      --v17;
    }
    while ( v17 );
    v25 = *v16;
    v26 = v16[1];
    v27 = *((_QWORD *)v16 + 4);
    *(_OWORD *)v5 = v25;
    *((_OWORD *)v5 + 1) = v26;
    *((_QWORD *)v5 + 4) = v27;
    v28 = v43;
    do
    {
      v29 = v28[1];
      *(_OWORD *)v4 = *v28;
      v30 = v28[2];
      *((_OWORD *)v4 + 1) = v29;
      v31 = v28[3];
      *((_OWORD *)v4 + 2) = v30;
      v32 = v28[4];
      *((_OWORD *)v4 + 3) = v31;
      v33 = v28[5];
      *((_OWORD *)v4 + 4) = v32;
      v34 = v28[6];
      *((_OWORD *)v4 + 5) = v33;
      v35 = v28[7];
      v28 += 8;
      *((_OWORD *)v4 + 6) = v34;
      v4 = (struct CP_EVENT_METADATA_BLOB *)((char *)v4 + 128);
      *((_OWORD *)v4 - 1) = v35;
      --v15;
    }
    while ( v15 );
    v36 = *v28;
    v10 = 0;
    v37 = v28[1];
    v38 = *((_QWORD *)v28 + 4);
    *(_OWORD *)v4 = v36;
    *((_OWORD *)v4 + 1) = v37;
    *((_QWORD *)v4 + 4) = v38;
    goto LABEL_20;
  }
  v11 = 783LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)(unsigned int)v9);
LABEL_9:
  v12 = v45;
  v13 = v39;
LABEL_20:
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v12 = v45;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v10;
}
