/*
 * XREFs of ?GetIdForNewComboButton@ButtonRecognizer@@AEAAIAEAUComboButtonRegistration@@@Z @ 0x1800C5F04
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800C65A0 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180090A90 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C6EA8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ButtonRecognizer::GetIdForNewComboButton(ButtonRecognizer *this, struct ComboButtonRegistration *a2)
{
  __int64 *v2; // r14
  __int64 *j; // rbx
  __int64 v6; // rcx
  __int128 v7; // xmm1
  char *v8; // r8
  _DWORD *v9; // rdx
  char v11; // si
  char *v12; // rax
  const struct std::nothrow_t *v13; // rdx
  __int64 **v14; // rax
  __int64 *v15; // rcx
  __int64 *i; // rax
  unsigned int v17; // ecx
  char v19; // [rsp+40h] [rbp-11h]
  _QWORD v20[3]; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v21[2]; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+80h] [rbp+2Fh]

  v2 = (__int64 *)*((_QWORD *)this + 4);
  j = (__int64 *)*v2;
  while ( j != v2 )
  {
    v19 = *((_BYTE *)j + 40);
    std::vector<enum _Button>::vector<enum _Button>(v20, j + 6);
    v7 = *(_OWORD *)(j + 11);
    v8 = (char *)v20[0];
    v21[0] = *(_OWORD *)(j + 9);
    v22 = j[13];
    v21[1] = v7;
    if ( *(_BYTE *)a2 == v19 )
    {
      v9 = (_DWORD *)*((_QWORD *)a2 + 1);
      v6 = (v20[1] - v20[0]) ^ (*((_QWORD *)a2 + 2) - (_QWORD)v9);
      if ( (v6 & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        if ( v9 == *((_DWORD **)a2 + 2) )
        {
LABEL_9:
          v6 = (__int64)a2 + 32;
          if ( *((_DWORD *)a2 + 8) == LODWORD(v21[0]) && operator==(v6, (__int64)v21) )
          {
            v11 = 1;
            goto LABEL_15;
          }
        }
        else
        {
          v6 = v20[0] - (_QWORD)v9;
          while ( *v9 == *(_DWORD *)((char *)v9 + v6) )
          {
            if ( ++v9 == *((_DWORD **)a2 + 2) )
              goto LABEL_9;
          }
        }
      }
    }
    v11 = 0;
LABEL_15:
    if ( v8 )
    {
      v12 = v8;
      v13 = (const struct std::nothrow_t *)((v20[2] - (_QWORD)v8) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v13 >= 0x1000 )
      {
        v8 = (char *)*((_QWORD *)v8 - 1);
        v13 = (const struct std::nothrow_t *)((char *)v13 + 39);
        if ( (unsigned __int64)(v12 - v8 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v6, v13);
          __debugbreak();
        }
      }
      operator delete(v8, v13);
    }
    if ( v11 )
      break;
    if ( !*((_BYTE *)j + 25) )
    {
      v14 = (__int64 **)j[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v15 = *v14;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v15 + 25); v15 = (__int64 *)*v15 )
          j = v15;
      }
    }
  }
  if ( j == *((__int64 **)this + 4) )
  {
    v17 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v17 + 1;
  }
  else
  {
    return *((unsigned int *)j + 8);
  }
  return v17;
}
