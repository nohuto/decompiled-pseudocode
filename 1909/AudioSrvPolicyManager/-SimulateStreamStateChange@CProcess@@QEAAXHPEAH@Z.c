/*
 * XREFs of ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180013CC0
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000E6E8 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000FF30 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001BEC0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180017B84 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x1800260AC (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 */

void __fastcall CProcess::SimulateStreamStateChange(CProcess *this, unsigned int a2, int *a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r14d
  unsigned int *v9; // rbp
  const unsigned __int16 *v10; // rdi
  unsigned int v11; // r12d
  BOOL v12; // r13d
  int v13; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+10h]
  int *v15; // [rsp+90h] [rbp+18h]
  int v16; // [rsp+98h] [rbp+20h]

  v15 = a3;
  v14 = a2;
  v3 = *((_DWORD *)this + 76);
  v4 = 0;
  v5 = 0;
  v16 = 0;
  if ( v3 > 0 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 < 0 || v4 >= v3 )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x180013DC5LL);
      }
      v8 = 0;
      v9 = *(unsigned int **)(v7 + *((_QWORD *)this + 37));
      v10 = *(const unsigned __int16 **)(v7 + *((_QWORD *)this + 36));
      do
      {
        v11 = 0;
        if ( *v9 )
        {
          v12 = a2 == 0;
          do
          {
            v13 = 0;
            TsSessionIdUpdateStreamClassPolicyGains(*((_DWORD *)this + 49), v10, v8, v12, &v13);
            v5 |= v13;
            ++v11;
          }
          while ( v11 < *v9 );
          a2 = v14;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < 0x15 );
      v7 += 8LL;
      v3 = *((_DWORD *)this + 76);
      v4 = v16 + 1;
      v16 = v4;
    }
    while ( v4 < v3 );
  }
  *v15 = v5;
}
