/*
 * XREFs of ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x18043E4EC
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x18043C610 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18012E9B8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180178EE0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1803836B0 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18042E040 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x18043FDA0 (-s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::_CommitGutters(
        CAppLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  int v3; // eax
  unsigned int *v5; // rcx
  int v6; // ebx
  unsigned int v7; // r14d
  int v8; // esi
  bool v9; // zf
  _QWORD *v10; // rdi
  const struct _GUID *v11; // r8
  void *v13[2]; // [rsp+20h] [rbp-39h] BYREF
  struct _GUID v14; // [rsp+30h] [rbp-29h] BYREF
  LONG v15[4]; // [rsp+40h] [rbp-19h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-9h] BYREF
  struct tagRECT v17; // [rsp+60h] [rbp+7h] BYREF
  __int128 v18; // [rsp+70h] [rbp+17h] BYREF
  _BYTE v19[8]; // [rsp+80h] [rbp+27h] BYREF
  LONG v20; // [rsp+88h] [rbp+2Fh]

  v3 = *((_DWORD *)this + 17);
  v5 = (unsigned int *)((char *)this + 64);
  *(_DWORD *)&v14.Data2 = v3;
  v6 = 0;
  v7 = *v5;
  *(_DWORD *)v14.Data4 = v5[2];
  *(_DWORD *)&v14.Data4[4] = v5[3];
  v14.Data1 = v7;
  v8 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v5, a2, a3);
  `vector constructor iterator'((char *)&v16, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
  v9 = *((_QWORD *)this + 14) == 1LL;
  v16 = (struct tagRECT)v14;
  v17 = (struct tagRECT)v14;
  if ( v9 )
  {
    v10 = (_QWORD *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)*v10 + 56LL))(*(_QWORD *)*v10, 0LL, v13);
    v18 = *(_OWORD *)v13;
    if ( Platform::Guid::Equals((Platform::Guid *)&v18, &v14) )
      return (unsigned int)v6;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**(_QWORD **)*v10 + 56LL))(*(_QWORD *)*v10, 0LL, &v14);
    if ( v14.Data1 == v7 )
    {
      v16.left = *(_DWORD *)v14.Data4;
      v16.right = v8 + *(_DWORD *)v14.Data4;
    }
    else
    {
      v16.right = v14.Data1;
      v16.left = v14.Data1 - v8;
    }
    v17 = v16;
  }
  else
  {
    if ( *((_QWORD *)this + 14) != 2LL )
      return (unsigned int)-2147418113;
    v10 = (_QWORD *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)*v10 + 56LL))(*(_QWORD *)*v10, 0LL, &v18);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)*v10 + 56LL))(*(_QWORD *)*v10, 1LL, v19);
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**(_QWORD **)(*v10 + 8LL) + 56LL))(
      *(_QWORD *)(*v10 + 8LL),
      0LL,
      &v14);
    (*(void (__fastcall **)(_QWORD, __int64, LONG *))(**(_QWORD **)(*v10 + 8LL) + 56LL))(
      *(_QWORD *)(*v10 + 8LL),
      1LL,
      v15);
    v16.right = v15[0];
    v16.left = v20;
    v17.left = v20 + ((unsigned int)(v15[0] - v20 - v8) >> 1);
    v17.right = v8 + v17.left;
  }
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  v6 = CAppLayoutItem::s_CreateInstance_Gutter(&v16, &v17, v11, v13);
  if ( v6 >= 0 )
  {
    *(void **)&v14.Data1 = v13[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
           v10,
           &v14,
           1uLL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  return (unsigned int)v6;
}
