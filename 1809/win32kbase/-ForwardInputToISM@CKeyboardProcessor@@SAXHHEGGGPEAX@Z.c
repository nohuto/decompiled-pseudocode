/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z @ 0x1C014C2F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     xxxToUnicodeEx @ 0x1C0065210 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToISM(
        int a1,
        int a2,
        unsigned __int8 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        void *a7)
{
  _QWORD *v11; // rax
  __int16 v12; // r9
  int v13; // edx
  unsigned __int16 v14; // r8
  unsigned __int8 *v15; // rcx
  __int16 v16; // r8
  __int16 v17; // ax
  unsigned __int8 *i; // rcx
  __int16 v19; // ax
  unsigned __int8 v20; // cl
  __int64 *v21; // rdi
  _BYTE *v22; // rdx
  int v23; // r8d
  int v24; // r10d
  __int64 v25; // rcx
  _QWORD v26[40]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v26, 0, 0x138uLL);
  v11 = (_QWORD *)HMValidateHandleNoSecure((unsigned __int64)a7, 19);
  if ( v11 )
    v26[0] = *v11;
  else
    v26[0] = 0LL;
  LOWORD(v26[1]) = a6;
  v12 = a2 != 0;
  if ( a4 || !a3 )
  {
    if ( a1 && (a5 & 0x10E7) == 0x10E7 )
      v12 = 4327;
  }
  else
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      v13 = (unsigned __int8)a5;
      if ( (unsigned int)(unsigned __int8)a5 - 16 <= 2 )
        v13 = 2 * (unsigned __int8)a5 + 128;
      v14 = 0;
      if ( *(_BYTE *)(gpKbdTbl + 56) )
      {
        while ( *(unsigned __int8 *)(*(_QWORD *)(gpKbdTbl + 48) + 2LL * v14) != v13 )
        {
          if ( ++v14 >= *(unsigned __int8 *)(gpKbdTbl + 56) )
            goto LABEL_12;
        }
        a4 = (unsigned __int8)v14;
      }
      else
      {
LABEL_12:
        v15 = *(unsigned __int8 **)(gpKbdTbl + 64);
        if ( v15 && (v16 = *((_WORD *)v15 + 1)) != 0 )
        {
          while ( (unsigned __int8)v16 != v13 )
          {
            v17 = *((_WORD *)v15 + 3);
            v15 += 4;
            LOBYTE(v16) = v17;
            if ( !v17 )
              goto LABEL_16;
          }
          a4 = *v15 | 0xE000;
        }
        else
        {
LABEL_16:
          for ( i = *(unsigned __int8 **)(gpKbdTbl + 72); i; i += 4 )
          {
            v19 = *((_WORD *)i + 1);
            if ( !v19 )
              break;
            if ( (unsigned __int8)v19 == v13 )
            {
              a4 = *i | 0xE100;
              goto LABEL_24;
            }
          }
          v20 = aVkNumpad;
          v21 = &aVkNumpad;
          if ( (_BYTE)aVkNumpad )
          {
            while ( v20 != v13 )
            {
              v21 = (__int64 *)((char *)v21 + 1);
              v20 = *(_BYTE *)v21;
              if ( !*(_BYTE *)v21 )
                goto LABEL_23;
            }
            a4 = (_WORD)v21 - (unsigned __int16)&aVkNumpad + 71;
          }
          else
          {
LABEL_23:
            a4 = 0;
          }
        }
      }
    }
LABEL_24:
    v12 |= 0x40u;
  }
  v22 = (char *)&v26[1] + 6;
  WORD2(v26[1]) = a3;
  WORD1(v26[1]) = a4;
  v23 = 0;
  HIWORD(v26[33]) = (a5 >> 7) & 2 | v12;
  do
  {
    v24 = *((unsigned __int8 *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v23 >> 2));
    if ( _bittest(&v24, (unsigned __int8)(2 * (v23 & 3))) )
      *v22 |= 0x80u;
    if ( _bittest(&v24, (unsigned __int8)(2 * (v23 & 3) + 1)) )
      *v22 |= 1u;
    ++v23;
    ++v22;
  }
  while ( v23 < 256 );
  xxxToUnicodeEx(a5, a4, (char *)&v26[1] + 6, (__int64)&v26[34] + 4, 15, 4, 0LL);
  InputExtensibilityCallout::CoreMsgSendMessage(v25, 9);
}
