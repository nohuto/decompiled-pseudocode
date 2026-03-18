/*
 * XREFs of ?Initialize@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ @ 0x1C013C8A4
 * Callers:
 *     ?Create@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C013C620 (-Create@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C0138748 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C013878C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C013C5A8 (-Create@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<233472,912>::Initialize(__int64 a1)
{
  NSInstrumentation *Section; // rax
  void *v4; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x39000);
  *(_QWORD *)(a1 + 16) = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)(a1 + 24), (void **)0x39000) < 0 )
    return 0;
  v4 = NSInstrumentation::CSectionBitmapAllocator<233472,912>::Create(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = v4;
  return v4 != 0LL;
}
