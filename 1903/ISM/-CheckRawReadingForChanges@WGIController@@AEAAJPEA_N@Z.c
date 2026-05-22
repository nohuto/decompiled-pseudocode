/*
 * XREFs of ?CheckRawReadingForChanges@WGIController@@AEAAJPEA_N@Z @ 0x1800A948C
 * Callers:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x1800AA3D4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WGIController::CheckRawReadingForChanges(WGIController *this, bool *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // r9
  int v8; // r8d
  _BYTE *v9; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // r9
  int v12; // r8d
  _DWORD *v13; // rcx
  _DWORD *v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  double *v17; // rcx
  double *v18; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64 *))(**((_QWORD **)this + 9) + 104LL))(
         *((_QWORD *)this + 9),
         *((unsigned int *)this + 41),
         *((_QWORD *)this + 17),
         *((unsigned int *)this + 42),
         *((_QWORD *)this + 18),
         *((_DWORD *)this + 40),
         *((_QWORD *)this + 16),
         &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = *((int *)this + 41);
  v8 = 0;
  v9 = (_BYTE *)*((_QWORD *)this + 17);
  v10 = &v9[v7];
  if ( (int)v7 <= 0 )
  {
LABEL_6:
    v11 = *((int *)this + 42);
    v12 = 0;
    v13 = (_DWORD *)*((_QWORD *)this + 18);
    v14 = &v13[v11];
    if ( (int)v11 <= 0 )
    {
LABEL_9:
      v15 = *((int *)this + 40);
      v16 = 0;
      v17 = (double *)*((_QWORD *)this + 16);
      v18 = &v17[v15];
      if ( (int)v15 > 0 )
      {
        while ( *v17 < *v18 + 0.03125 && *v18 - 0.03125 < *v17 )
        {
          ++v17;
          ++v18;
          if ( ++v16 >= (int)v15 )
            goto LABEL_16;
        }
        *a2 = 1;
      }
LABEL_16:
      if ( !*a2 )
        return 0LL;
      goto LABEL_17;
    }
    while ( *v13 == *v14 )
    {
      ++v13;
      ++v14;
      if ( ++v12 >= (int)v11 )
        goto LABEL_9;
    }
  }
  else
  {
    while ( *v9 == *v10 )
    {
      ++v9;
      ++v10;
      if ( ++v8 >= (int)v7 )
        goto LABEL_6;
    }
  }
  *a2 = 1;
LABEL_17:
  memcpy_0(
    (void *)(8LL * *((int *)this + 40) + *((_QWORD *)this + 16)),
    *((const void **)this + 16),
    8LL * *((int *)this + 40));
  memcpy_0((void *)(*((int *)this + 41) + *((_QWORD *)this + 17)), *((const void **)this + 17), *((int *)this + 41));
  memcpy_0(
    (void *)(4LL * *((int *)this + 42) + *((_QWORD *)this + 18)),
    *((const void **)this + 18),
    4LL * *((int *)this + 42));
  return 0LL;
}
