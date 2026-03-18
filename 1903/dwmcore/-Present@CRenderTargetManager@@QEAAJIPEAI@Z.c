/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x1800925EC
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800922F8 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r13d
  int v4; // r14d
  __int64 v5; // rbp
  unsigned int v6; // r15d
  __int64 v8; // r12
  unsigned int v9; // edi
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  bool v16; // al
  __int64 result; // rax
  int v18; // ecx

  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v3 )
  {
    v8 = 0LL;
    do
    {
      v9 = 0;
      v10 = *(_QWORD **)(v8 + *((_QWORD *)this + 3));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 80LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 99LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 84LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 73LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 17LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 110LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 141LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 98LL) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 80LL) && v6 < a2 )
        {
          v9 = a3[v5];
          v5 = (unsigned int)(v5 + 1);
        }
        LOBYTE(v11) = *((_BYTE *)this + 113);
        v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v10[8] + 64LL))(v10 + 8, v11, v9);
        v14 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x18Cu, 0LL);
        if ( !v4 || v4 >= 0 && v14 < 0 )
          v4 = v14;
        if ( !*((_BYTE *)this + 112) && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 80LL) )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 264LL))(v10);
          v16 = v15 && *(_BYTE *)(v15 + 13438);
          *((_BYTE *)this + 112) = v16;
        }
      }
      ++v6;
      v8 += 8LL;
    }
    while ( v6 < v3 );
  }
  result = (unsigned int)v4;
  *((_BYTE *)this + 113) = 0;
  v18 = dword_18033C768;
  if ( dword_18033C768 <= (unsigned int)v5 )
    v18 = v5;
  dword_18033C768 = v18;
  return result;
}
