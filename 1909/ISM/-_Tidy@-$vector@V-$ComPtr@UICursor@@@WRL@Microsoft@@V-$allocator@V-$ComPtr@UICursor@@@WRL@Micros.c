/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180008080
 * Callers:
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x1800074EC (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x180007648 (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ??1?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800BFD48 (--1-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@.c)
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800BFD9C (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800525DC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Tidy(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v5 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v7 = v1;
    v6 = (unsigned __int64)v5;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v5 = (const struct std::nothrow_t *)v6;
      v1 = (__int64 *)v7;
    }
    operator delete(v1, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
