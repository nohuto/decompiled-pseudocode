/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C01586AC
 * Callers:
 *     RIMCreatePointerDeviceDeadzone @ 0x1C0139E60 (RIMCreatePointerDeviceDeadzone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0158CEC (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C0158D24 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  __int64 v8; // r11
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rbp
  unsigned int i; // r9d
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-18h]

  v3 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  ++*((_DWORD *)this + 1);
  if ( !a2 )
    goto LABEL_26;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v3;
    }
LABEL_26:
    v3 = -1073741811;
    goto LABEL_27;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_26;
  v6 = *((_DWORD *)a2 + 4);
  v7 = 0;
  if ( v6 )
  {
    v8 = *((_QWORD *)a2 + 1);
    do
    {
      v9 = _mm_cvtsi128_si32(*(__m128i *)(v8 + 24LL * v7));
      v19 = *(_OWORD *)(v8 + 24LL * v7);
      v20 = *(_QWORD *)(v8 + 24LL * v7 + 16);
      if ( v9 > 0x168 || DWORD1(v19) > 0x168 || v9 == DWORD1(v19) )
        goto LABEL_26;
      v10 = 0;
      if ( (_DWORD)v20 )
      {
        while ( *(_DWORD *)(*((_QWORD *)&v19 + 1) + 8LL * v10 + 4) >= *(_DWORD *)(*((_QWORD *)&v19 + 1) + 8LL * v10) )
        {
          if ( ++v10 >= (unsigned int)v20 )
            goto LABEL_14;
        }
        goto LABEL_26;
      }
LABEL_14:
      ;
    }
    while ( ++v7 < v6 );
  }
  *((_DWORD *)this + 4) = 2;
  v11 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v11;
  v12 = Win32AllocPoolZInit(24 * v11, 1853506642LL);
  *((_QWORD *)this + 3) = v12;
  v13 = v12;
  if ( !v12 )
  {
LABEL_16:
    v3 = -1073741801;
LABEL_27:
    RIMDeadzone::Release(this);
    return v3;
  }
  v14 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      v15 = 3LL * v14;
      v13[v15] = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v14);
      *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v15 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 24LL * v14 + 16);
      *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v14 + 8) = Win32AllocPoolZInit(
                                                              8LL
                                                            * *(unsigned int *)(*((_QWORD *)this + 3) + 24LL * v14 + 16),
                                                              1853506642LL);
      v13 = (_QWORD *)*((_QWORD *)this + 3);
      if ( !v13[3 * v14 + 1] )
        goto LABEL_16;
      for ( i = 0; i < LODWORD(v13[3 * v14 + 2]); v13 = (_QWORD *)*((_QWORD *)this + 3) )
      {
        v17 = i++;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v14 + 8) + 8 * v17) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v14 + 8)
                                                                                               + 8 * v17);
      }
    }
    while ( ++v14 < *((_DWORD *)this + 8) );
  }
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v3;
}
