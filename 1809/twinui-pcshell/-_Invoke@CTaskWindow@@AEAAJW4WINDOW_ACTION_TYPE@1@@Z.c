/*
 * XREFs of ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x180125340
 * Callers:
 *     ?Cloak@CTaskWindow@@UEAAJXZ @ 0x180124AA0 (-Cloak@CTaskWindow@@UEAAJXZ.c)
 *     ?Uncloak@CTaskWindow@@UEAAJXZ @ 0x1801252F0 (-Uncloak@CTaskWindow@@UEAAJXZ.c)
 *     ?ValidateActivation@CTaskWindow@@UEAA_NXZ @ 0x180125310 (-ValidateActivation@CTaskWindow@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::_Invoke(__int64 a1, int a2)
{
  int v2; // edi
  bool v4; // r12
  int v6; // esi
  signed int v7; // ecx
  const struct CTaskWindow::WINDOW_ACTION *const near *v8; // r14
  __int64 v9; // r15
  signed int LastError; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  _DWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  bool v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]

  v2 = -1;
  v4 = 0;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v4 = a2 == 0;
    }
    else if ( a2 != 2 )
    {
      goto LABEL_7;
    }
    v2 = *(_DWORD *)(a1 + 52);
  }
LABEL_7:
  v6 = 0;
  if ( v2 == -1 )
    v6 = -2147019873;
  v7 = v6;
  if ( v2 != -1 )
  {
    v14 = v2;
    v8 = (&CTaskWindow::s_rgActions)[a2];
    v9 = 0LL;
    v15 = *(_QWORD *)(a1 + 40);
    if ( !*((_DWORD *)v8 + 2) )
    {
LABEL_18:
      if ( v7 >= 0 && *((_DWORD *)v8 + 6) )
      {
        v11 = *(_QWORD *)(a1 + 136);
        v16[0] = a2;
        v12 = 0LL;
        v16[1] = v2;
        v17 = v4;
        v18 = v11;
        v19 = a1 + 40;
        do
        {
          v7 = (*(__int64 (__fastcall **)(_DWORD *))(*((_QWORD *)v8 + 2) + 8 * v12))(v16);
          if ( v7 < 0 )
            break;
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *((_DWORD *)v8 + 6) );
      }
      return (unsigned int)v7;
    }
    while ( (*((unsigned __int8 (__fastcall **)(int *))*v8 + v9))(&v14) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)v8 + 2) )
      {
        v7 = v6;
        goto LABEL_18;
      }
    }
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    if ( v7 >= 0 )
    {
      v7 = -2147019873;
      goto LABEL_18;
    }
  }
  return (unsigned int)v7;
}
