/*
 * XREFs of ?NotifyExternalDeviceFault@WGIRawInputProvider@@QEAAJPEBU_ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS@@_K@Z @ 0x18006BF20
 * Callers:
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x18006E280 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 * Callees:
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall WGIRawInputProvider::NotifyExternalDeviceFault(
        WGIRawInputProvider *this,
        const struct _ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS *a2,
        __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  _QWORD *v7; // r9
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rdx
  char v15; // al
  _QWORD v17[12]; // [rsp+30h] [rbp-78h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  v7 = (_QWORD *)((char *)this + 160);
  v8 = 0LL;
  v9 = (_QWORD *)((char *)this + 160);
  do
  {
    if ( *v9 == a3 )
    {
      v10 = 3 * v8;
      *((_QWORD *)this + v10 + 21) = *(_QWORD *)a2;
      *((_WORD *)this + 4 * v10 + 88) = *((_WORD *)a2 + 4);
      *((_BYTE *)this + 8 * v10 + 178) = *((_BYTE *)a2 + 10);
      goto LABEL_10;
    }
    ++v8;
    v9 += 3;
  }
  while ( v8 < 8 );
  v11 = 0LL;
  while ( *v7 )
  {
    ++v11;
    v7 += 3;
    if ( v11 >= 8 )
      goto LABEL_10;
  }
  v12 = 3 * v11;
  *((_QWORD *)this + v12 + 21) = *(_QWORD *)a2;
  *((_WORD *)this + 4 * v12 + 88) = *((_WORD *)a2 + 4);
  *((_BYTE *)this + 8 * v12 + 178) = *((_BYTE *)a2 + 10);
  *((_QWORD *)this + 3 * v11 + 20) = a3;
LABEL_10:
  if ( (*((_BYTE *)a2 + 8) & 0xC) != 0 || (*((_BYTE *)a2 + 9) & 0xC) != 0 || (*((_BYTE *)a2 + 10) & 2) != 0 )
  {
    v13 = 0LL;
    v14 = (char *)this + 176;
    do
    {
      v17[v13] = *((_QWORD *)v14 - 2);
      v15 = *v14;
      v14 += 24;
      *((_BYTE *)&v17[8] + v13) = v15;
      *((_BYTE *)&v17[9] + v13) = *(v14 - 23);
      *((_BYTE *)&v17[10] + v13++) = *(v14 - 22);
    }
    while ( v13 < 8 );
    if ( v3 )
      LeaveCriticalSection(v3);
    RtlPublishWnfStateData(WNF_ISM_GAMECONTROLLER_ZEPHYRUS_FAULT, 0LL, v17, 88LL, 0LL);
    v3 = 0LL;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
