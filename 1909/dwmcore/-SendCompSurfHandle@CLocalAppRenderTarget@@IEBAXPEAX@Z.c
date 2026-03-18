/*
 * XREFs of ?SendCompSurfHandle@CLocalAppRenderTarget@@IEBAXPEAX@Z @ 0x18024F4EC
 * Callers:
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024EB68 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLocalAppRenderTarget::SendCompSurfHandle(CLocalAppRenderTarget *this, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // r8d
  int v5; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  void *v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1224LL) + 48LL);
  if ( v2 )
    v4 = *(_DWORD *)(v2 + 68);
  else
    v4 = 0;
  v7[0] = v4;
  v7[1] = *((unsigned int *)this + 14);
  LOWORD(v5) = 0;
  v8 = a2;
  CoreUICallSend(v3, v7, 2LL, 9LL, v5, &unk_1802B1171, (unsigned int)&v8, v6);
}
