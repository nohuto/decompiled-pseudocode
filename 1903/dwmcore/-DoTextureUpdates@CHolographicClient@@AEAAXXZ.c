/*
 * XREFs of ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x180248BA8
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x180248E50 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxq @ 0x1801B6734 (McTemplateU0xxxq.c)
 *     McTemplateU0xxxx @ 0x180246340 (McTemplateU0xxxx.c)
 *     ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x18024A12C (-RemoveAt@-$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0f @ 0x18024A28C (McTemplateU0f.c)
 */

void __fastcall CHolographicClient::DoTextureUpdates(CHolographicClient *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  unsigned int **v4; // rsi
  DWORD v5; // eax
  __int64 v6; // rcx
  DWORD v7; // ebp
  __int64 i; // rdi
  int v9; // [rsp+28h] [rbp-10h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 60);
  v3 = ++qword_180340CA8;
  if ( !v2 )
    goto LABEL_16;
  v4 = (unsigned int **)((char *)this + 216);
  do
  {
    v5 = WaitForSingleObject(*((HANDLE *)*v4 + 1), 0);
    v7 = v5;
    if ( !v5 )
    {
      ++qword_180340CA0;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
          *((_QWORD *)this + 3),
          **v4,
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 184LL))(
        *((_QWORD *)this + 3),
        *((_QWORD *)*v4 + 2));
LABEL_10:
      DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v4);
      goto LABEL_11;
    }
    if ( v5 == -1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      {
        v9 |= v5;
        McTemplateU0xxxq(v6, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATEWAITFAILED, qword_180340CA8, qword_180340CA0, v2);
      }
      goto LABEL_10;
    }
LABEL_11:
    v2 = *((_DWORD *)this + 60);
  }
  while ( v7 == -1 && v2 );
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0f();
  v3 = qword_180340CA8;
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xxxx(v3 - qword_180340CA0, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATECOUNT);
}
