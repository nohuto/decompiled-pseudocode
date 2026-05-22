/*
 * XREFs of ?ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCTarget@@0@Z @ 0x1800F7204
 * Callers:
 *     ?OnDeviceRemoval@MPCProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800F5E70 (-OnDeviceRemoval@MPCProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5FD0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

void __fastcall MPCProcessor::ProcessSourceDetectedAndLostForAllHands(
        MPCProcessor *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3)
{
  int v3; // r14d
  char v5; // r13
  int v8; // ebp
  __int64 *v9; // rdi
  __int64 *j; // rbx
  __int64 **v11; // rax
  __int64 *v12; // rcx
  __int64 *i; // rax

  v3 = *((_DWORD *)this + 246);
  v5 = *((_BYTE *)this + 3664);
  if ( v3 == 5 )
    v8 = *((_DWORD *)this + 416);
  else
    v8 = 0;
  v9 = (__int64 *)*((_QWORD *)this + 470);
  j = (__int64 *)*v9;
  while ( j != v9 )
  {
    if ( v3 != 5 || v8 != *((_DWORD *)j + 8) )
    {
      *((_BYTE *)this + 3664) = v5;
      MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a2, a3, 0LL, *((_DWORD *)j + 8));
    }
    if ( !*((_BYTE *)j + 25) )
    {
      v11 = (__int64 **)j[2];
      if ( *((_BYTE *)v11 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v12 = *v11;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
          j = v12;
      }
    }
  }
}
