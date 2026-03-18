/*
 * XREFs of ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0195060
 * Callers:
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C01924E4 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x1C019478C (-FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0196818 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 */

void __fastcall CPTPEngine::ProcessGestureFrame(CPTPEngine *this, struct PTPInput *a2, unsigned int a3, int *a4)
{
  __int64 v4; // rax
  CPTPEngine *v6; // r10
  __int64 *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  _BYTE *v17; // r14
  __int128 v18; // xmm1
  _DWORD *v19; // r9
  int v20; // edi
  _BYTE *v21; // r8
  __int128 v22; // xmm0
  char v23; // r15
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  unsigned int v28; // r11d
  __int64 v29; // rbx
  __int64 v30; // r8
  char v31; // bp
  bool v32; // si
  __int64 v33; // rbx
  char v34; // r14
  char v35; // r8
  bool v36; // bl
  unsigned int v37; // edi
  char *v38; // r9
  __int64 v39; // r11
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  BOOL v43; // r8d
  __int64 v44; // r11
  __int64 v45; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v46; // [rsp+70h] [rbp-298h]
  _BYTE v47[12]; // [rsp+78h] [rbp-290h] BYREF
  char v48; // [rsp+84h] [rbp-284h] BYREF

  v4 = 4LL;
  v6 = this;
  v8 = &v45;
  do
  {
    v9 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v8 = *(_OWORD *)a2;
    v10 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 1) = v9;
    v11 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v8 + 2) = v10;
    v12 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v8 + 3) = v11;
    v13 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v8 + 4) = v12;
    v14 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v8 + 5) = v13;
    v15 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v8 + 6) = v14;
    v8 += 16;
    *((_OWORD *)v8 - 1) = v15;
    --v4;
  }
  while ( v4 );
  v16 = *((_QWORD *)a2 + 14);
  v17 = 0LL;
  v18 = *((_OWORD *)a2 + 1);
  v19 = 0LL;
  v20 = 0;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  v21 = v47;
  v22 = *((_OWORD *)a2 + 2);
  v23 = 1;
  *((_OWORD *)v8 + 1) = v18;
  v24 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v8 + 2) = v22;
  v25 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v8 + 3) = v24;
  v26 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v8 + 4) = v25;
  v27 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v8 + 5) = v26;
  *((_OWORD *)v8 + 6) = v27;
  v8[14] = v16;
  v28 = v46;
  if ( (_DWORD)v46 )
  {
    v29 = (unsigned int)v46;
    do
    {
      v19 = (_DWORD *)((char *)v6 + 296 * (unsigned int)(*((_DWORD *)v21 + 1) % *((_DWORD *)v6 + 4)) + 1160);
      if ( (*v19 & 1) != 0 && (*v19 & 0x400) == 0 )
      {
        ++v20;
        v17 = v21;
      }
      v21 += 96;
      --v29;
    }
    while ( v29 );
  }
  v30 = v45;
  v31 = 0;
  v32 = !a3
     && *((_DWORD *)v6 + 739) > 2u
     && v45 - *((_QWORD *)v6 + 396) < *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 87) / 0x3E8;
  if ( v20 != 1 || (*((_DWORD *)v17 + 3) & 0x40000) != 0 )
  {
    v23 = 0;
  }
  else
  {
    if ( (*v19 & 0x8000) != 0 )
    {
      v33 = *((_QWORD *)v6 + 394);
    }
    else
    {
      v33 = v45;
      *v19 |= 0x8000u;
      *((_QWORD *)v6 + 394) = v30;
    }
    if ( v30 - v33 >= *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 49) / 0x3E8 )
    {
      *v19 &= ~0x8000u;
      v31 = 1;
    }
  }
  v34 = 0;
  v35 = 1;
  v36 = v31 || v32;
  v37 = 0;
  if ( v28 )
  {
    v38 = &v48;
    do
    {
      v39 = 296LL * (unsigned int)(*((_DWORD *)v38 - 2) % *((_DWORD *)v6 + 4));
      v40 = *(_DWORD *)((char *)v6 + v39 + 1160);
      v41 = v40;
      if ( (v40 & 1) != 0 && v36 && (v40 & 2) != 0 )
      {
        v41 = v40 | 0x400;
        *(_DWORD *)((char *)v6 + v39 + 1160) = v40 | 0x400;
      }
      if ( (v41 & 1) == 0 || (v41 & 0x400) != 0 )
      {
        *(_DWORD *)v38 = 0;
        *(_QWORD *)(v38 + 28) = 0LL;
      }
      else
      {
        v42 = *(_DWORD *)v38;
        v43 = (v41 & 0x20000000) != 0 || (v42 & 0x2000) != 0;
        if ( (v41 & 2) != 0 )
        {
          v42 = v42 & 0xFFFCFFFF | 0x10000;
          *(_DWORD *)v38 = v42;
        }
        if ( v36 )
        {
          *(_DWORD *)v38 = 0x40000;
          v42 = 0x40000;
        }
        if ( (v42 & 0x40000) == 0 )
          v34 = 1;
        CPTPEngine::FixupGestureContact(v6, (struct PTPEnginePointerNode *)(v38 - 12), v43);
        v35 = 0;
        if ( !v23 )
          *(_DWORD *)((char *)v6 + v44 + 1160) &= ~0x8000u;
      }
      v28 = v46;
      ++v37;
      v38 += 96;
    }
    while ( v37 < (unsigned int)v46 );
  }
  if ( !v36 && !v35 && v34 || (*a4 = 1, !v35) )
    CBasePTPEngine::SendGestureOutput(v6, 3LL, a3, v28, v47);
}
