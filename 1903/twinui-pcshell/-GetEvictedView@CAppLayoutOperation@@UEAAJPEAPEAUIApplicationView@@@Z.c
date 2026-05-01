/*
 * XREFs of ?GetEvictedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18041A430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperation::GetEvictedView(CAppLayoutOperation *this, struct IApplicationView **a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ebx
  struct IApplicationView *v14; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v5);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      if ( v7 <= 0xA )
      {
        v8 = 1470;
        if ( _bittest(&v8, v7) )
          break;
      }
      if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 11) )
        goto LABEL_5;
    }
    v4 = v5;
    v9 = 0;
  }
  else
  {
LABEL_5:
    v9 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( v9 < 0 )
  {
    return 0;
  }
  else
  {
    v10 = *((_QWORD *)this + 10);
    v14 = 0LL;
    v11 = *(_QWORD *)(v10 + 8 * v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v12 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v11 + 24LL))(v11, &v14);
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      v12 = 0;
      *a2 = v14;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  return (unsigned int)v12;
}
