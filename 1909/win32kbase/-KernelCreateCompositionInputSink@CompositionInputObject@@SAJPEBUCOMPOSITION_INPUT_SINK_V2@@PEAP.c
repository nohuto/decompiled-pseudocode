/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00887A0
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00013EC (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C008855C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0012A70 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0088260 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        void **a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  int v13; // ebx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // ecx
  ACCESS_MASK v17; // esi
  int v18; // eax
  struct _ACL *v19; // rdi
  __int64 v20; // r9
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  _DWORD v35[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  struct _ACL *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  _DWORD v42[76]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[336]; // [rsp+1B0h] [rbp+B0h] BYREF
  HANDLE Handle; // [rsp+310h] [rbp+210h] BYREF
  struct _ACL *v45; // [rsp+320h] [rbp+220h] BYREF

  Handle = (HANDLE)-1LL;
  v2 = v42;
  v3 = 2LL;
  do
  {
    v5 = *((_OWORD *)a1 + 1);
    *v2 = *(_OWORD *)a1;
    v6 = *((_OWORD *)a1 + 2);
    v2[1] = v5;
    v7 = *((_OWORD *)a1 + 3);
    v2[2] = v6;
    v8 = *((_OWORD *)a1 + 4);
    v2[3] = v7;
    v9 = *((_OWORD *)a1 + 5);
    v2[4] = v8;
    v10 = *((_OWORD *)a1 + 6);
    v2[5] = v9;
    v11 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v2[6] = v10;
    v2 += 8;
    *(v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *((_QWORD *)a1 + 4);
  v13 = 0;
  v14 = *(_OWORD *)a1;
  v45 = 0LL;
  v15 = *((_OWORD *)a1 + 1);
  *v2 = v14;
  v2[1] = v15;
  *((_QWORD *)v2 + 4) = v12;
  if ( v42[0] != 232 && (v42[0] != 296 || v42[58] > 4u) || v42[2] > 4u || v42[16] > 4u || v42[30] > 4u || v42[44] > 4u )
    v13 = -1073741811;
  if ( UserIsCurrentProcessDwm((__int64)a1, (__int64)a2) )
  {
    v16 = 0;
    v17 = 3;
  }
  else
  {
    v16 = -1073741824;
    v17 = -1073741824;
  }
  if ( v13 < 0 )
    goto LABEL_24;
  v18 = UserAllocDefaultCompositionSecurityDescriptor(v16, &v45);
  v19 = v45;
  v13 = v18;
  if ( v18 >= 0 )
  {
    v35[1] = 0;
    v39 = 0;
    v36 = 0LL;
    v38 = 0;
    v37 = 0LL;
    v41 = 0LL;
    v35[0] = 48;
    v40 = v45;
    KeEnterCriticalRegion();
    v21 = v43;
    v22 = 2LL;
    v23 = v42;
    do
    {
      v24 = v23[1];
      *v21 = *v23;
      v25 = v23[2];
      v21[1] = v24;
      v26 = v23[3];
      v21[2] = v25;
      v27 = v23[4];
      v21[3] = v26;
      v28 = v23[5];
      v21[4] = v27;
      v29 = v23[6];
      v21[5] = v28;
      v30 = v23[7];
      v23 += 8;
      v21[6] = v29;
      v21 += 8;
      *(v21 - 1) = v30;
      --v22;
    }
    while ( v22 );
    v31 = *v23;
    LOBYTE(v20) = 1;
    v32 = v23[1];
    v33 = *((_QWORD *)v23 + 4);
    *v21 = v31;
    v21[1] = v32;
    *((_QWORD *)v21 + 4) = v33;
    v13 = CompositionObject::Create(
            (__int64)v21,
            (__int64)v35,
            v17,
            v20,
            2,
            200,
            (__int64 (__fastcall *)(PVOID, __int64, char *))CompositionInputObject::ObjectInit,
            (__int64)v43,
            &Handle);
    KeLeaveCriticalRegion();
    if ( v13 >= 0 )
      *a2 = Handle;
  }
  if ( v19 )
    Win32FreePool((__int64)v19);
  if ( v13 < 0 )
  {
LABEL_24:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  return (unsigned int)v13;
}
