/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0GPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C017C990
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0PEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017CEF0 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0PEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017CFB0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z @ 0x1C017D660 (-SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z.c)
 */

void __fastcall CKeyboardProcessor::CreateKeyboardInputMessage(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int16 a8,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a9,
        struct _MIT_KEYBOARD_INPUT_MESSAGE *a10)
{
  int v14; // ebx
  _QWORD *v15; // rax
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int16 v18; // dx
  __int64 v19; // r14
  int v20; // r8d
  unsigned __int16 v21; // r9
  unsigned __int8 *v22; // rcx
  unsigned __int8 *v23; // rcx
  unsigned __int8 v24; // r9
  char *v25; // rcx
  __int16 v26; // cx
  __int64 v27; // rcx
  __int16 *v28; // rax
  _BYTE *v29; // rdx
  int v30; // r9d
  __int16 v31; // ax
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  _OWORD v47[22]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v48[2]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v49; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v47, 0, sizeof(v47));
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    a2 = -7907;
  InputTraceLogging::Keyboard::SendToUserMode(a3 & 0x8000, a5, a1);
  v14 = 0;
  if ( a5 )
  {
    v15 = (_QWORD *)HMValidateHandleNoSecure((unsigned __int64)a5, 19);
    if ( v15 )
      *(_QWORD *)&v47[0] = *v15;
  }
  if ( a9 )
  {
    v16 = &v49;
    v49 = *(_OWORD *)a9;
  }
  else
  {
    v48[0] = 0LL;
    v48[1] = 0LL;
    v16 = (__int128 *)v48;
  }
  v17 = *v16;
  DWORD2(v47[20]) = a7;
  v47[21] = v17;
  if ( a6 )
    *((_QWORD *)&v47[19] + 1) = a6;
  else
    *((_QWORD *)&v47[19] + 1) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(LARGE_INTEGER *)&v47[20] = KeQueryPerformanceCounter(0LL);
  WORD4(v47[0]) = a4;
  v18 = (a3 & 0x8000) != 0;
  if ( (a8 & 0x100) != 0 )
  {
    v18 |= 0x100u;
  }
  else if ( (a8 & 0x200) != 0 )
  {
    v18 |= 0x200u;
  }
  if ( (a8 & 0x80u) != 0 )
    v18 |= 0x80u;
  v19 = 2LL;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      v20 = (unsigned __int8)a3;
      if ( (unsigned int)(unsigned __int8)a3 - 16 <= 2 )
        v20 = 2 * (unsigned __int8)a3 + 128;
      v21 = 0;
      if ( *(_BYTE *)(gpKbdTbl + 56) )
      {
        while ( *(unsigned __int8 *)(*(_QWORD *)(gpKbdTbl + 48) + 2LL * v21) != v20 )
        {
          if ( ++v21 >= *(unsigned __int8 *)(gpKbdTbl + 56) )
            goto LABEL_26;
        }
        v26 = (unsigned __int8)v21;
      }
      else
      {
LABEL_26:
        v22 = *(unsigned __int8 **)(gpKbdTbl + 64);
        if ( v22 )
        {
          while ( *((_WORD *)v22 + 1) )
          {
            if ( v22[2] == v20 )
            {
              v26 = *v22 | 0xE000;
              goto LABEL_35;
            }
            v22 += 4;
          }
        }
        v23 = *(unsigned __int8 **)(gpKbdTbl + 72);
        if ( v23 )
        {
          while ( *((_WORD *)v23 + 1) )
          {
            if ( v23[2] == v20 )
            {
              v26 = *v23 | 0xE100;
              goto LABEL_35;
            }
            v23 += 4;
            if ( !v23 )
              break;
          }
        }
        v24 = aVkNumpad[0];
        v25 = aVkNumpad;
        if ( aVkNumpad[0] )
        {
          while ( v24 != v20 )
          {
            v24 = *++v25;
            if ( !*v25 )
              goto LABEL_34;
          }
          v26 = (_WORD)v25 - (unsigned __int16)aVkNumpad + 71;
        }
        else
        {
LABEL_34:
          v26 = 0;
        }
      }
LABEL_35:
      a2 = v26;
      if ( ausNumPadCvt[0] )
      {
        v27 = 0LL;
        v28 = ausNumPadCvt;
        while ( *(_BYTE *)v28 != (_BYTE)a3 )
        {
          v28 = &ausNumPadCvt[++v27];
          if ( !*v28 )
            goto LABEL_49;
        }
        v18 |= 2u;
      }
    }
LABEL_49:
    v18 |= 0x40u;
  }
  else if ( a1 && (a3 & 0x10E7) == 0x10E7 )
  {
    v18 |= 0x1000u;
  }
  WORD6(v47[0]) = (unsigned __int8)a3;
  WORD5(v47[0]) = a2;
  HIWORD(v47[16]) = (a3 >> 7) & 2 | v18;
  v29 = (char *)v47 + 14;
  do
  {
    v30 = *((unsigned __int8 *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v14 >> 2));
    if ( _bittest(&v30, (unsigned __int8)(2 * (v14 & 3))) )
      *v29 |= 0x80u;
    if ( _bittest(&v30, (unsigned __int8)(2 * (v14 & 3) + 1)) )
      *v29 |= 1u;
    ++v14;
    ++v29;
  }
  while ( v14 < 256 );
  v31 = WORD2(v47[17]);
  if ( (_BYTE)a3 == 0xE7 )
    v31 = a2;
  WORD2(v47[17]) = v31;
  v32 = v47;
  do
  {
    v33 = v32[1];
    *(_OWORD *)a10 = *v32;
    v34 = v32[2];
    *((_OWORD *)a10 + 1) = v33;
    v35 = v32[3];
    *((_OWORD *)a10 + 2) = v34;
    v36 = v32[4];
    *((_OWORD *)a10 + 3) = v35;
    v37 = v32[5];
    *((_OWORD *)a10 + 4) = v36;
    v38 = v32[6];
    *((_OWORD *)a10 + 5) = v37;
    v39 = v32[7];
    v32 += 8;
    *((_OWORD *)a10 + 6) = v38;
    a10 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a10 + 128);
    *((_OWORD *)a10 - 1) = v39;
    --v19;
  }
  while ( v19 );
  v40 = v32[1];
  *(_OWORD *)a10 = *v32;
  v41 = v32[2];
  *((_OWORD *)a10 + 1) = v40;
  v42 = v32[3];
  *((_OWORD *)a10 + 2) = v41;
  v43 = v32[4];
  *((_OWORD *)a10 + 3) = v42;
  v44 = v32[5];
  *((_OWORD *)a10 + 4) = v43;
  *((_OWORD *)a10 + 5) = v44;
}
